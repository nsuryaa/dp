#include<bits/stdc++.h>
using namespace std;

void explainPair()
{
    pair<int,int> p = {1,3};
    
    cout << p.first << " " <<p.second << endl;

    pair<int , pair<int,int>> p1 = {1,{2,3}};

    cout << p1.first <<" " << p1.second.first << " " << p1.second.second << endl;

    pair<int,int> arr[] = {{1,2},{2,5},{5,1}};

    cout << arr[1].second;
}
int main(){
    explainPair();
    return 0;
}