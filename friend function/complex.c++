#include<bits/stdc++.h>
using namespace std;

class Complex
{
    int real, img;
    public:
        void getdata(int a, int b)
        {
            real = a;
            img = b;
        }
        void show()
        {
            cout<<real<<"+"<<img<<"i"<<endl;
        }
        friend Complex add(Complex, Complex);
};

Complex add(Complex c1, Complex c2)
{
    Complex c3;
    c3.real = c1.real + c2.real;
    c3.img = c1.img + c2.img;
    return c3;
}

int main()
{
    Complex c1, c2, c3;
    c1.getdata(3, 4);
    c2.getdata(5, 6);
    c3 = add(c1, c2);
    c3.show();

    return -1;
}