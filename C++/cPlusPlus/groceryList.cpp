#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
    vector<string> groceryList;
    string item;

    cout << "Enter items to be added to grocery list";

    while(cin>>item)
    {
        groceryList.push_back(item);
    }

    cout << "Your list contains following items: " << endl;

    for(auto i : groceryList){
        cout << i << " ";
    }

    groceryList.empty();
    groceryList.size();
    return 0;
}