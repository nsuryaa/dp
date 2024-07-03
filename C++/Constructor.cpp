#include<iostream>

using namespace std;

class Shop
{
    // public:
    //     int money;
    private:
        int money;
    public:
        Shop(int m){
            money = m;
        }
        void modifyMoney()
        {
            money = money+5;
        }
        int getMoney()
        {
            return money;
        }
};
int main()
{
    Shop s(100);
    s.modifyMoney();
    s.modifyMoney();
    cout << s.getMoney();
    return 0;
}