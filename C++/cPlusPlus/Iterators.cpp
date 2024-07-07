//used to access the elements of a container(vectors,maps,sets)
//like pointers

//v->vector
//v.begin() , v.end()

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    vector<int> v = {4,5,6,3,7,6};

    auto b = v.begin();

    while(b != v.end())
    {
        cout << *b << " ";
        b++;
    }
    return 0;
}