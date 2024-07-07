#include<iostream>
#include<string>
#include<vector>

using namespace std;
// using std::vector;


//vectors - collect of objects of same type
//often reffered as container
//vector is a class template

class Room{
    int l;
    int b;
};

int main()
{
    int a[3]={1,2,3};
    vector<int> v1(3);
    vector<string> v2;
    vector<float> v3;

    Room room;

    vector<Room> rooms;

    return 0;
}