#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s = "hello";

    // for(auto c : s)
    //     cout << c << " ";
    if(s.empty())
        cout << "string is empty";
    else
        cout << "string is not empty" << endl;
    s[0] = toupper(s[0]);
    cout << s;
    return 0;
}