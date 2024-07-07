#include<iostream>

using namespace std;

double x = 2;//global scope

// void simple()
// {
//     cout << x << endl;
// }

int main()
{
    int x = 4;
    cout << ::x << endl;
    // simple();
    return 0;
}

