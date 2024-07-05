#include<iostream>

using namespace std;


int multiply3(int a=1,int b=1,int c = 1)
{
    return a*b*c;
}

int main()
{
    cout << multiply3(2,3,4) << endl;
    cout << multiply3(2,3) << endl;
    return 0;
}