#include<iostream>
using namespace std;

int main()
{
    int age = 17;
    bool voting_registered = true;

    //&& - and
    // \\ - or

    if(age >=18 and voting_registered==true)
    {
        cout << "Eligible to vote\n";
    }
    else
    {
        cout << "Not eligible to vote\n";
    }
    return 0;
}
