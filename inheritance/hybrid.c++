#include<bits/stdc++.h>
using namespace std;

class int_numbers
{
    
        
    public:
        int a, b;
        void getdata()
        {
            cin>>a>>b;
        }
        void display()
        {
            cout<<"a = "<<a<<" b = "<<b<<endl;
        }

};

class float_numbers
{
    protected:
        int x, y;
    public:
        void get()
        {
            cin>>x>>y;
        }
        void dis()
        {
            cout<<"x = "<<x<<" y = "<<y<<endl;
        }
};

class addition :virtual public int_numbers
{
    public:
    void add()
    {
        cout<<a+b<<endl;
    }
};

class substraction :virtual  public int_numbers
{
    public:
    void sub()
    {
        cout<<a-b<<endl;
    }
};

class multiplication : virtual public float_numbers
{
    public:
    void multi()
    {
        cout<<x*y<<endl;
    }
};

class division :virtual public float_numbers
{
    public:
    void div()
    {
        cout<<x/y<<endl;
    }
};

class Arithematic :virtual public addition,virtual public substraction,virtual public multiplication,virtual public division
{

};
int main()
{
    Arithematic a;
    a.getdata();
    a.display();
    a.add();
    // addition obj1;
    // substraction obj2;
    // multiplication obj3;
    // division obj4;

    // obj1.getdata();
    // obj1.display();
    // obj1.add();

    cout<<"for substractuib\n";

    a.getdata();
    a.display();
    a.sub();

    cout<<"for multiplication\n";

    a.get();
    a.dis();
    a.multi();

    cout<<"for substractuib\n";

    a.get();
    a.dis();
    a.div();

    return 0;
}