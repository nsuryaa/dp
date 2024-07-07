#include<iostream>
#include<string>

using namespace std;

int main(){
    string s1 = "Hello";
    string s2("Hello World");
    string s3("Hen");

    // if(s1==s2)
    //     cout << "equal";
    // else
    //     cout << "not equal";

    if(s1 < s2)
        cout << s1 << " less than " << s2;

    return 0;
}