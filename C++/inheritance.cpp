#include<iostream>
using namespace std;

class Human{
    public:
        void printName(){
            cout << "Surya"<< endl;
        }
};
class Dhoni:public Human{

};
int main()
{
    Dhoni dhoni;
    dhoni.printName();
    return 0;
}
