#include<iostream>

using namespace std;

void printTypeAndValue(int a)
{
    cout << "Integer: "<< a << endl;
}
void printTypeAndValue(float b)
{
    cout << "Decimal: "<< b << endl;
}

int main()
{
    int a = 2;
    float b = 4.5;

    printTypeAndValue(a);
    printTypeAndValue(b);
    return 0;
}