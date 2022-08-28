#include<bits/stdc++.h>
using namespace std;

class Calculator
{
    int a, b;
    public:
    inline void add(int, int);
    inline void sub(int, int);
    inline void multi(int, int);
    inline void div(int, int);
};

void Calculator :: add(int x, int y)
{
    int res = x+y;
    cout<<"result = "<<res<<endl;
}

void Calculator :: sub(int x, int y)
{
    int res = x-y;
    cout<<"result = "<<res<<endl;
}

void Calculator :: multi(int x, int y)
{
    int res = x*y;
    cout<<"result = "<<res<<endl;
}

void Calculator :: div(int x, int y)
{
    int res = x/y;
    cout<<"result = "<<res<<endl;
}

int main()
{
    Calculator c;
    c.add(10, 20);
    c.sub(20, 5);
    c.multi(10, 3);
    c.div(20, 4);

    return 0;
}