#include<iostream>

using namespace std;

class Number{
    int number;
    public:
        Number(){

        }
        Number(int a){
            number = a;
        }
        //Operator overloading
        Number operator+(Number x){
            Number newNumber;
            newNumber.number = number + x.number;
            return newNumber;
        }
        void printNumber(){
            cout << number << endl;
        }
};
int main()
{
    // int a = 4;
    // int b = 5;
    Number a(4);
    Number b(5);

    Number c = a + b;

    // int c = a + b;
    c.printNumber();
    return 0;
}