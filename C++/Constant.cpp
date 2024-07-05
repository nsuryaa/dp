#include<iostream>

using namespace std;

class Example{
    int a;
    public:
        Example(){
            a = 1;
        }

        void changeA(){
            a = 5;
        }

        //constant function
        void printA() const {
            // a = 2;
            cout << a << endl;
        }
};

int main()
{
    Example object;
    object.printA();
    object.changeA();
    object.printA();

    //constant object

    const Example o;
    // o.changeA(); Error function not constant
    o.printA();
    return 0;
}