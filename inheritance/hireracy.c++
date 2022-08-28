#include<bits/stdc++.h>
using namespace std;

class Vehicle
{
    protected:
        int mileage, price;
    public:
        void getdata()
        {
            cin>>mileage>>price;
        }
        void display()
        {
            cout<<"milage = "<<mileage<<endl<<"price = "<<price<<endl;
        }
};

class car : public Vehicle
{
    int cost, seats, warranty;
    string fuel_type;
    public:
        void getdata1()
        {
            cin>>cost>>seats>>warranty>>fuel_type;
        }

        void show()
        {
            cout<<"cost = "<<cost<<endl;
            cout<<"seats = "<<seats<<endl;
            cout<<"warranty = "<<warranty<<endl;
            cout<<"fuel_type = "<<fuel_type<<endl;
        }
};

class Bike : public Vehicle
{
    int cylinder, gear;
    string coll_type, wheel;
    public:
        void getdata2()
        {
            cin>>cylinder>>gear>>coll_type>>wheel;
        }
        void show1()
        {
            cout<<"cylinder = "<<cylinder<<endl;
            cout<<"cylinder = "<<gear<<endl;
            cout<<"cylinder = "<<coll_type<<endl;
            cout<<"wheel = "<<wheel<<endl;
        }
};

int main()
{
    car c;
    Bike b;
    c.getdata();
    c.getdata1();
    c.display();
    c.show();


    cout<<"\n\n\n\nfor bike\n";
    b.getdata();
    b.getdata2();
    b.display();
    b.show1();
    return 0;
}
