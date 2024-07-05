#include<iostream>

using namespace std;

class Human{
    private:
        int age;
    public:
        string name;
    protected:
        int height;

};

class Dhoni:public Human{
    public:
        void printValues(){
            // cout << age << endl;
            cout << name << endl;
            cout << height << endl;
        }
};
int main(){
    Dhoni dhoni;
    dhoni.printValues();
    return 0;
}