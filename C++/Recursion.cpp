#include<iostream>
using namespace std;

// void f(){
//     f();
// }

int factorial(int number)
{
    cout << "Step: " << number << endl;
    if(number == 1)
    {
        return 1;
    }
    return number * factorial(number - 1);
}
int main()
{
    cout << factorial(5) << endl;
    return 0;
}