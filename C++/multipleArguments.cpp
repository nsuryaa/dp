#include<iostream>

using namespace std;

int addNumbers(int x,int y,int a,int b,int c)
{
    int answer = x + y + a + b + c;
    return answer;
}

int main()
{
    cout << addNumbers(23,5,1,1,1);
    return 0;
}