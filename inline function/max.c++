#include<bits/stdc++.h>
using namespace std;

class Maxmin
{
    int a, b;
    public:
    void getdata(int x, int y)
    {
        a = x;
        b = y;
    }
    Maxmin()
    {
        a = 0;
        b = 0;
    }
   inline void check()
    {
        if(a>b)
        {
            cout<<a;
        }
        else if(a<b)
        {
            cout<<b;
        }
        else
        {
            cout<<a<<" "<<b;
        }
    }
};

int main()
{
    Maxmin m;
    m.getdata(10, 20);
    m.check();
    return 0;
}