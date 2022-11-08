#define NDEBUG 1

#include <iostream>
#include "stringsList.h"

using namespace std;

int main() {
    stringList l;
 
    l.addFirst( "Hello" );
    l.addLast( "World" );
    l.addLast( "!!" );
    l.print( cout );
    cout << endl;
    l.addFirst( "I say:");
    cout << l<< endl;
}