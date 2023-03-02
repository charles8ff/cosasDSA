#include <string>

using namespace std;

class SNode {

public:
    SNode(const string s ) {
        element = s;
        next = nullptr;
    }

    virtual ~SNode() { if( next != nullptr ) delete next;}

    string getString( void ) const { return element; }
    void setString( string s ) { element = s; }

    SNode* getNext() const { return next; }
    void putNext( SNode* p) { next = p; }

protected:

    string element;
    SNode *next;

};