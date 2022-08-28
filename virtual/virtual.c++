#include<bits/stdc++.h>
using namespace std;

class Shape
{
    protected:
        double s=10;
    public:
        virtual void area() = 0;
        virtual void perimeter() = 0;
};

class triangle :public Shape
{
    double s1, s2;
    public:
    void getdata(int x, int y)
    {
        s1 = x;
        s2 = y;
    }
    void area()
    {
        int p = s+s1+s2;
        float a = sqrt(s*(s-s1)*(s-s2));
        cout<<a<<endl;
    }
    void perimeter()
    {
        cout<<"perimer = "<<s+s1+s2<<endl;
    }
};

int main()
{
    triangle t;
    Shape *ptr;
    t.getdata(20, 30);
    ptr = &t;
    ptr->area();
    ptr->perimeter();
    return 0;

}