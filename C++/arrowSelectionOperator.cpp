#include<iostream>

using namespace std;

class Example{
    public:
        void printHello(){
            cout << "Hello" << endl;
        }
};
int main()
{
    Example object;
    Example* pointer = &object;
    // object.printHello();
    pointer->printHello();
    return 0;
}