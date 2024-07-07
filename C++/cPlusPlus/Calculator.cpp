#include<iostream>

using namespace std;

int main()
{
    // >> - stream extraction operator
    int x;
    int y;

    cout << "Enter X:";
    cin >> x;
    cout << "Enter Y:";
    cin >> y;

    cout << "Sum X + Y: " << x + y;

    return 0;
}