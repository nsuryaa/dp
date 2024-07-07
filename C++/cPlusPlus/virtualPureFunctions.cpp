#include<iostream>

using namespace std;

class Batsman{
    public:
        // virtual void specialShot(){
        //     cout << "Special Shot" << endl;
        // }
        virtual void specialShot()=0;//Pure virtual function
};
class Dhoni:public Batsman{
    public:
        void specialShot(){
            cout << "Helicopter Shot" << endl;
        }
};
class Kohli:public Batsman{
    public:
        void specialShot(){
            cout << "Cover Drive" << endl;
        }
};

int main()
{
    Dhoni dhoni;
    Kohli kohli;

    Batsman* batsman1 = &dhoni;
    Batsman* batsman2 = &kohli;

    batsman1->specialShot();
    batsman2->specialShot();
    return 0;
}