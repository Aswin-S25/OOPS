#include<iostream>
using namespace std;

class Vehicle
{
    protected:
        double mylage;
        int price;
    public:
        Vehicle(double, int);
        void display();
};

class Car : public Vehicle
{
    int store_cost;
    int warranty;
    int seating_capacity;
    string fuel_type;

    public:
        Car(double, int, int, int, int, string);
        void display1();
};

class Bike : public Vehicle
{
    int cylinder;
    int gear;
    string cooling;
    string wheel;
    double fuel_size;

    public:
        Bike(double, int, int, int, string, string, double);
        void display2();
};

Vehicle :: Vehicle(double mylage, int price)
{
    this->mylage = mylage;
    this->price = price;
};

void Vehicle :: display()
{
    cout<<"mylage = "<<mylage;
    cout<<"price = $"<<price;
}

Car :: Car(double mylage, int price,int store_cost, int warranty, int seating_capacity, string fuel_type):Vehicle(mylage, price)
{
    this->store_cost = store_cost;
    this->warranty = warranty;
    this->seating_capacity = seating_capacity;
    this->fuel_type = fuel_type;
    this->mylage = mylage;
    this->price = price;
}

void Car :: display1()
{
    cout<<"store cost = "<<store_cost;
    cout<<"warranty = "<<warranty;
    cout<<"seating_capacity = "<<seating_capacity;
    cout<<"fuel type = "<<fuel_type;
}

Bike::Bike(double mylage, int price,int cylinder, int gear, string cooling, string wheel, double fuel_size):Vehicle(mylage, price)
{
    this->cylinder = cylinder;
    this->gear = gear;
    this->cooling = cooling;
    this->wheel = wheel;
    this->fuel_size = fuel_size;
    this->mylage = mylage;
    this->price = price;
}

void Bike :: display2()
{
    cout<<"no of cylinder : "<<cylinder;
    cout<<"no of gear: "<<gear;
    cout<<"cooling system = "<<cooling;
    cout<<"no of wheel = "<<wheel;
    cout<<"fuel size = "<<fuel_size;
}

int main()
{
    int price,price1, warranty, store_cost, seating_capacity, cylinder, gear;
    double mylage,mylage1, fuel_size;
    string fuel_type, cooling, wheel;
    int choice;
    Car c(mylage, price, store_cost, warranty, seating_capacity, fuel_type);
    Bike b(mylage1, price1, cylinder, gear, cooling, wheel, fuel_size);
    cout<<"enter the choice : ";
    cout<<"1 for car ";
    cout<<"2 for bike";
    cout<<"3 for exit";
    cin>>choice;
    switch (choice)
    {
        case 1:
            cout<<"details of car";
            cout<<"mylage = ";
            cin>>mylage;
            cout<<"price = $";
            cin>>price;
            cout<<"store cost = ";
            cin>>store_cost;
            cout<<"warranty = ";
            cin>>warranty;
            cout<<"seating_capacity = ";
            cin>>seating_capacity;
            cout<<"fuel type = ";
            cin>>fuel_type;

            c.display1();

        case 2:
            cout<<"details of bike";
            cout<<"mylage = ";
            cin>>mylage1;
            cout<<"price = $";
            cin>>price1;
            cout<<"no of cylinder : ";
            cin>>cylinder;
            cout<<"no of gear: ";
            cin>>gear;
            cout<<"cooling system = ";
            cin>>cooling;
            cout<<"no of wheel = ";
            cin>>wheel;
            cout<<"fuel size = ";
            cin>>fuel_size;

            b.display2();

        default:
            break;
    }

    return 0;
}