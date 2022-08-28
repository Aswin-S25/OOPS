#include<bits/stdc++.h>
using namespace std;

class Box
{
    int r, b;
    public:
        Box()
        {
            r=10;
            b=20;
        }
       void show()
        {
            cout<<"r = "<<r<<endl;
            cout<<"b = "<<b<<endl;
        }
        Box operator +(Box b2)
        {
            Box b3;
            b3.r = r+b2.r;
            b3.b = b+b2.b;
            return b3;
        }
};



int main()
{
    Box b1, b2;
    Box b3 = b1+b2;
    b3.show();
    return 0;
}