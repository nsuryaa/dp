#include<iostream>

using namespace std;

class Human{
    public:
        Human(){
            cout << "Human constructor" << endl;
        }
        ~Human(){
            cout << "Human destructor" << endl;
        }
};

class Dhoni:public Human{
    public:
        Dhoni(){
            cout << "Dhoni constructor" << endl;
        }
        ~Dhoni(){
            cout << "Dhoni destructor" << endl;
        }
};
int main()
{
    Dhoni dhoni;
    cout << "Main function" << endl;
    return 0;
}