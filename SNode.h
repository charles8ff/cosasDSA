#ifndef DSA_SNODE
#define DSA_SNODE

#include <string>

using namespace std;

class SNode {
public:
    SNode( void ) {
        element = string();
        next = nullptr;
    }
    SNode( const string s ) {
        element = s;
        next = nullptr;
    }
    SNode( const SNode& n ) {
        element = n.element;
        next = nullptr;
    }
    virtual ~SNode() {}

    string getString( void ) const {
        return element;
     }
    void setString( string s ) {
        element = s;
    }

    SNode* getNext() const {
        return next;
    }
    void putNext( SNode* p) {
        next = p;
    }
protected:
    string element;
    SNode *next;
};

#endif
