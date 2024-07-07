#include<iostream>
#include<string>

using namespace std;

class Birthday{
    int day;
    int month;
    int year;

    public:
        Birthday(int d,int m,int y){
            day = d;
            month = m;
            year = y;
        }

        void printDateOfBirth(){
            cout << day << "/" << month << "/" << year << endl;
        }
};

class Person{
    string name;
    Birthday bday;

    public:
        Person(string s,Birthday b):name(s),bday(b){
        }
        void printPersonData()
        {
            cout << "Name: " << name << endl;
            bday.printDateOfBirth();
        }
};

int main()
{
    Birthday b(2,3,99);
    Person p("Surya",b);
    p.printPersonData();
    return 0;
}