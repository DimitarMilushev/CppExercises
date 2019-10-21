#include <iostream>
#include <fstream> //to read and work with files


using namespace std;

int main()
{
    ofstream buckyFile;
    buckyFile.open("tuna.txt"); //even if there's no such file C++ is going to create one

    buckyFile << "I love tuna yet the tuna doesn't love me!\n";
    buckyFile.close();
    //always close in order to free up memory!!!
}
