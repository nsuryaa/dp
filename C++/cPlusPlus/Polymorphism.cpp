#include<iostream>

using namespace std;

class Batsman{
    protected:
        int runs;

    public:
        void setRuns(int r){
            runs = r;
        }

};

class Dhoni : public Batsman{
    public:
        void printRuns(){
            cout << "Dhoni scored: " << runs << endl;
        }
};

class Kohli : public Batsman{
    public:
        void printRuns(){
            cout << "Kohli scored: " << runs << endl;
        }
};

int main(){
    Dhoni dhoni;
    Kohli kohli;

    Batsman* batsman1 = &dhoni;
    Batsman* batsman2 = &kohli;

    batsman1->setRuns(10);
    batsman2->setRuns(12);

    dhoni.printRuns();
    kohli.printRuns();
    return 0;
}