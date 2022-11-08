#ifndef DSA_STRING_LIST
#define DSA_STRING_LIST

#include "iList.h"
#include "SNode.h"
#include <string>
#include <iostream>

class stringList : public iList
{
public:
    stringList( void ) { 
        first = last = nullptr;  
        size = 0;
    }
    stringList( const string s ) {
        first = new SNode(s);
        first->putNext( nullptr );
        last = first;
        size = 1;
    }
    stringList( const stringList& l ) : stringList() {
        for( SNode* p = l.first; p!= nullptr; p=p->getNext() )
            addLast( p->getString() );
    }
    virtual ~stringList() {
        last = first;
        while( last != nullptr) {
            first = first->getNext();
            delete last;
            last = first;
        }
        first = last = nullptr;
        size = 0;
    }

    bool isEmpty( void ) const {
        return size == 0;
    }

    virtual void addFirst( const string& s ) {
		SNode *p = new SNode(s);
		p->putNext( first );
		if( first == nullptr ) last = p;
		first = p;
        size++;
    }
    virtual void addLast ( const string& s ) {
        if( isEmpty() ){
            first = last = new SNode(s);
        }
        else {
            SNode* q = new SNode(s);
            last->putNext(q);
            last = q;
        }
        size++;
    }

    virtual void removeFirst( void ){
        if( !isEmpty() ){
            SNode* p = first;
            first = first->getNext();
            delete p;
            if( first == nullptr ) last = nullptr;
            size--;
        }
	}
    virtual void removeLast( void ){
        if( !isEmpty() ){     
            if(  size == 1 ){
                delete first;
                first = last = nullptr;
            }
            else {
                SNode* p;
                for( p = first; p->getNext() != last; p = p->getNext() );
                p->putNext( nullptr );
                delete last;
                last = p;
            }
            size--;
        }
    }

    void print( ostream& os ) const {
        for( SNode* p = first; p != nullptr; p = p->getNext() )
            os << p->getString() << " ";
    }
    
protected:
    SNode *first;
    SNode *last;
    unsigned int size;
};

ostream& operator<<( ostream& os, const stringList& l ){
    l.print( os );
    return os;
}
    
#endif