#include<iostream>

using namespace std;

class Shop
{
    // public:
    //     int money;
    private:
        int money;
    public:
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
    Shop s;
    s.modifyMoney();
    cout << s.getMoney();
    return 0;
}