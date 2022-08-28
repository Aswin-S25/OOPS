#include<iostream>
using namespace std;

class Vehicle
{
    protected:
        int speed, price;
    public:
        void getdata()
        {
            cin>>speed>>price;
        }
        void show()
        {
            cout<<"speed = "<<speed<<"\nprice = "<<price<<endl;
        }
};

class car : public Vehicle
{
    int seats;
    string fuel_type;

    public:
        void input()
        {
            cin>>seats>>fuel_type;
        }
        void display()
        {
            cout<<"seats = "<<seats<<"\nfuel = "<<fuel_type<<endl;
        }

};

int main()
{
    car c;
    c.getdata();
    c.input();
    c.show();
    c.display();

    return -1;
}