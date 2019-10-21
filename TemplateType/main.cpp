#include <iostream>

using namespace std;

template <class bucky>
bucky addStuff(bucky number, bucky secondNumber) {

   return number + secondNumber;
}

int main()
{
    double x = 74, y = 7.77, z;
    z = addStuff(x, y);
    cout << z;
    return 0;
}
