#include<iostream>

using namespace std;

class Example{
    int a;
    public:
        Example(){
            a = 1;
        }
        void printA(){
            cout << "a = " << a << endl;
            cout << "this->a= " << this->a << endl;
            cout <<"(*this).a= " << (*this).a << endl;
        }
};

int main()
{
    Example e;
    e.printA();
    return 0;
}