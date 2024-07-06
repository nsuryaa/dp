#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ofstream testFile("testFile.txt");

    if(testFile.is_open()){
        
    }

    testFile << "Testing Files" << endl;

    testFile.close();
    return 0;
}