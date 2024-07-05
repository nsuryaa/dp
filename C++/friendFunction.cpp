#include<iostream>

using namespace std;

class Example{
    int var;
    public:
        Example(){
            var = 1;
        }

        friend void changeVar(Example& e);
};

void changeVar(Example& e){
    e.var = 3;
    cout << e.var << endl;

}

int main(){
    Example object;
    //object.var = 3; // error var is private
    changeVar(object);
    return 0;
}