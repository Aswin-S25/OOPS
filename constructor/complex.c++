#include<bits/stdc++.h>
using namespace std;

class Complex
{
    int real, img;
    public:
    Complex()
    {
        real = 0;
        img = 0;
    }
    Complex(int a, int b)
    {
        real = a;
        img = a;
    }

    Complex(Complex &obj)
    {
        real = obj.real;
        img = obj.img;
    }
    ~Complex(){};
    void show()
    {
        cout<<real<<"+"<<img<<"i"<<endl;;
    }
};

int main()
{
    Complex c1, c2(10, 20);
    Complex c3 = c2;
    c1.show();
    c2.show();
    c3.show();
    return 0;
}