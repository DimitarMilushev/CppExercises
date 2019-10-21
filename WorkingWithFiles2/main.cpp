#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream buckyFile("beefjerky.txt"); // in case you forgot the path

    if(buckyFile.is_open()){
         cout << "ok the file is open" << endl;
       }
    else{
        cout << "bucky you really messed up" << endl;
    }

    buckyFile << "Something about beef..";
    buckyFile.close();
}
