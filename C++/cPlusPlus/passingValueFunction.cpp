#include<iostream>

using namespace std;

void printThisNumber(int x)
{
    cout << "Number is: "<<x << endl;
}
void printTwoNumbers(int a , int b)
{
    cout << "Numbers are: "<< a << "\t" << b;
}
int main()
{
    printThisNumber(5);
    printTwoNumbers(35,45);
    return 0;
}