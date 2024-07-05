#include<iostream>

using namespace std;

template<class T>
T add(T a,T b){
    return a + b;
}
// int add(int a,int b){
//     return a + b;
// }

// double add(double a,double b){
//     return a + b;
// }

int main(){
    double a=5,b=7;
    cout << add(a,b) << endl;
    return 0;
}