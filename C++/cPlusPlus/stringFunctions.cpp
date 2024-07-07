#include<iostream>
#include<string>

using namespace std;

int main()
{
    // string s;
    // cin >> s;
    // string s = "hello world";

    // string s1("hello world");
    // getline(cin,s);

    // cout << "String: " << s << endl;
    // cout << s1 << endl;

    // string s1 = "hello";
    // string s2 = "world";
    
    // // cout << s.substr(0,3) << endl;
    // cout << s1 << " " << s2 << endl;

    // s1.swap(s2);

    // cout << s1 << " " << s2 << endl;
    string s1 = "abcdabab";

    cout << s1.find("ab") << endl;
    cout << s1.rfind("ab") << endl;


    return 0;
}