#include <iostream>

using namespace std;

class Cat {
   public:
       Meow(){anger = 0;}
   private:
       int anger;

   friend void WhatToDo(Meow &mwo); // something doesn't work properly
};

void WhatToDo(Meow &mwo){
    mwo.anger = 99;
    cout<< mwo.anger << endl;
}

int main()
{
    Cat bob;
    WhatToDo(bob);
    return 0;
}
