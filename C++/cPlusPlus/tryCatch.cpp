#include<iostream>

using namespace std;

int main()
{

    try
    {
        int fatherAge = 20;
        int sonAge = 50;

        if(sonAge > fatherAge){
            throw -1;
        }
    }catch(...){
        cout <<"Son age is greater than father" << endl;
    }
    
    return 0;
}