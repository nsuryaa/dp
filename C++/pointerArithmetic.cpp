#include<iostream>

using namespace std;

int main()
{
    int a[3];

    int* p1 = &a[0];
    int* p2 = &a[1];
    int* p3 = &a[2];
    cout << p1 << endl;
    cout << p2 << endl;
    cout << p3 << endl;

    // p1 += 2;
    p1++;
    cout << p1 << endl;
    return 0;
}