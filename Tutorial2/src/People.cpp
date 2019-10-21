#include "People.h"
#include <iostream>;

using namespace std;

People::People(string x, Birthday bo)
: name(x), dateOfBirth(bo)//member initializer  -- only when using a class inside another class
{
    //ctor
}

void People::printInfo()
{

    cout << name << "i was born on ";
    dateOfBirth.printDate();
}
