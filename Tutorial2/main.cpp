#include <iostream>
#include "Birthday.h";
#include "People.h";

using namespace std;

int main()
{
    Birthday bdObject(1, 20, 2000);

    People someone("big boy", bdObject);
    return 0;
}
