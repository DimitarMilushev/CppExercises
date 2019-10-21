#include <iostream>
#include <fstream>

using namespace std;

//prototyped functions
int getWhatTheyWant();
void displayItems(int x);

//Main Function
int main()
{
    int whatTheyWant;

    whatTheyWant = getWhatTheyWant();

    while(whatTheyWant != 4)
    {
        switch(whatTheyWant)
        {
        case 1:
            displayItems(1);
            break;
        case 2:
            displayItems(2);
            break;
        case 3:
            displayItems(3);
            break;
        case 4:
            displayItems(4);
            break;
        default:
            cout << "wtf" << endl;
        }
      whatTheyWant = getWhatTheyWant();
    }
}
                //getwhattheywant function
int getWhatTheyWant()
{
        int choice;

        cout << "1 - just plain items" << endl;
        cout << "2 - helpful items items" << endl;
        cout << "3 - harmful items" << endl;
        cout << "4 - quit program" << endl;

        cin >> choice;
        return choice;
}

void displayItems(int x)
{

    ifstream objectFile("objects.txt");
    string name;
    double power;

    if(x == 1)
    {

       while(objectFile >> name >> power)
       {
           if(power == 0)
           {
               cout << name << " " << power << endl;
           }
       }
    }

    if(x == 2)
    {

       while(objectFile >> name >> power)
       {
           if(power > 0)
           {
               cout << name << " " << power << endl;
           }
       }
    }

    if(x == 3)
    {

       while(objectFile >> name >> power)
       {
           if(power < 0)
           {
               cout << name << " " << power << endl;
           }
       }
    }

    if(x == 4)
    {
        return;
    }
}



