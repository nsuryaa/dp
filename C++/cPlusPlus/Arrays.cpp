#include<iostream>

using namespace std;

int main()
{
    // int a[5]={1,2,3,4,5};
    // int b = 7;
    // cout << a[4]<< endl;
    int a[5];
    for(int i=0;i<5;i++)
    {
        cin >> a[i];
    }
    for(int i=0;i<5;i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}