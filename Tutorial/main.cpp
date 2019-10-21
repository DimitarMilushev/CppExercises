#include <iostream>;
#include "something.h";

using namespace std;

int main(){
cout<<"startUp";

something somethingObject;

something *somethingPointer = &somethingObject;

somethingObject.killme(); // access w/ an object
somethingPointer->killme(); //access w/ a pointer
return 0;
}
