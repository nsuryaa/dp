#include<iostream>

using namespace std;

template<class FIRST,class SECOND>
FIRST add(FIRST a,SECOND b){
    return a + b;
}
int main()
{
    int a = 5;
    double b = 7.5;
    cout << add(a,b) << endl;
    return 0;
}