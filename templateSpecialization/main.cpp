#include <iostream>

using namespace std;

template <class T>
class Spunky{
  public:
    Spunky(T x){
             cout << x << " is not a character!" << endl;
             }
};
//if input is char it will use the second template
//otherwise it will use the original
template<>
class Spunky<char>{
   public:
       Spunky(char x){
       cout << x << " is indeed a character!" << endl;
       }
};

int main()
{
    Spunky<char> obj1('a');
    Spunky<double> obj2(2.22);
    Spunky<string> obj3("asda");
    Spunky<bool> obj4(true);
    return 0;
}
