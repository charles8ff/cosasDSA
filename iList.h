#ifndef DSA_I_LIST
#define DSA_I_LIST

#include <string>
using namespace std;

/**
 * Single linked list ADT
 *
 */
class iList {
    virtual bool isEmpty( void ) const = 0;
    //
    //  * OPERATION: addFirst
    //  * DESCRIPTION: inserts a string at the top of the linked list
    //  * INPUT: const string& s
    //  * OUTPUT: void
    //  * PRE-CONDITION:
    //  * POST-CONDITION: s == getFirst()
    //  * INVARIANT:
    //
    virtual void addFirst ( const string& ) = 0;
    virtual void addLast ( const string& ) = 0;

#if 0
    // TODO
    //  * OPERATION: addAt
    //  * DESCRIPTION: inserts the string in the i-th node of the linked list displacing the rest
    //  *              of the nodes one position towards the tail of the list
    //  * INPUT: const unsigned int i, const string s
    //  * OUTPUT: void
    //  * PRE-CONDITION: 0 <= i <= getSize() - 1
    //  * POST-CONDITION: s == getAt( i )
    //  * INVARIANT:
    //
    virtual void addAt ( const unsigned int, const string& ) = 0;
    virtual string getFirst ( void ) const = 0;
    virtual string getLast ( void ) const = 0;
    virtual string getAt ( const unsigned int ) const = 0;
#endif
    virtual void removeFirst( void ) = 0;
    virtual void removeLast( void ) = 0;
#if 0
    // TODO
    //virtual void removeAt( const unsigned int ) = 0;
    //  * OPERATION: getSize
    //  * DESCRIPTION: returns the number of nodes in the linked list
    //  * INPUT: void
    //  * OUTPUT: unsigned int
    //  * PRE-CONDITION: 
    //  * POST-CONDITION:
    //  * INVARIANT: 
    //
    virtual unsigned int getSize( void ) const = 0;
#endif
};

#endif