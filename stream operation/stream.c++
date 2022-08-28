#include<iostream>
using namespace std;

class Complex
{
    int real, img;
    public:
    
        friend ostream& operator <<(ostream &out, Complex &c);
        friend istream& operator >>(istream &in, Complex &c1);
};

ostream& operator <<(ostream &out, Complex &c)
{
    cout<<"the real and imaginary part : ";
    out <<c.real<<"+"<<c.img<<"i\n";
    return out;
}
istream& operator >>(istream &in, Complex &c1)
{
    cout<<"enter the real and imaginary part";
    in>>c1.real>>c1.img;
    return in;
}

int main()
{
    Complex c1;
    cin>>c1;
    cout<<c1;

    return 0;
}