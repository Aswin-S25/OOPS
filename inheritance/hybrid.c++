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

class addition : public int_numbers
{
    public:
    void add()
    {
        cout<<a+b<<endl;
    }
};

class substraction :  public int_numbers
{
    public:
    void sub()
    {
        cout<<a-b<<endl;
    }
};

class multiplication :  public float_numbers
{
    public:
    void multi()
    {
        cout<<x*y<<endl;
    }
};

class division : public float_numbers
{
    public:
    void div()
    {
        cout<<x/y<<endl;
    }
};

int main()
{
    addition obj1;
    substraction obj2;
    multiplication obj3;
    division obj4;

    obj1.getdata();
    obj1.display();
    obj1.add();

    cout<<"for substractuib\n";

    obj2.getdata();
    obj2.display();
    obj2.sub();

    cout<<"for multiplication\n";

    obj3.get();
    obj3.dis();
    obj3.multi();

    cout<<"for substractuib\n";

    obj4.get();
    obj4.dis();
    obj4.div();

    return 0;
}