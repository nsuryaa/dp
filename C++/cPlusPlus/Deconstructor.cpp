#include<iostream>

using namespace std;

class Example{
    public:
        Example(){
            cout << "Constructor" << endl;
        }
        //Deconstructor
        ~Example(){
            cout << "Deconstructor" << endl;
        }
};

int main()
{
    Example object;
    cout << "Main" << endl;
    return 0;
}