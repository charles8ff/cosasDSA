#include <iostream>
#include "SNode.h"

using namespace std;

int main() {
    SNode w1( "Hello");
    SNode w2( "world!");
 
    w1.putNext( &w2 );

    for( SNode* p = &w1; p!= nullptr; p = p->getNext())   
        cout << p->getString() << " ";  
    cout << endl;

}