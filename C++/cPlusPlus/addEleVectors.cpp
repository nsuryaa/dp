#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    vector<int> v ={1,2,3,4,5};

    v.push_back(6);

    for(auto i:v)
        cout << i << " " ;
        cout << endl ;
        cout << v[1] << " ";
    return 0;
}