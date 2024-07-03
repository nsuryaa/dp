#include<iostream>

using namespace std;

class AClass
{
    public:
        void printHello(){
            cout << "Hello";
        }
};

int main()
{
    AClass object;
    object.printHello();
    return 0;
}