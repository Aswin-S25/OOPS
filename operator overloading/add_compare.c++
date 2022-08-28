//function should be implemetned as friend function

#include<bits/stdc++.h>
using namespace std;

class Distance
{
    float feet, inch;
    public:
        Distance()
        {
            feet = 30;
            inch = 3;
        }
        Distance(int a, int b)
        {
            feet = a;
            inch = b;
        }
        void show()
        {
            cout<<feet<<"feet and "<<inch<<"inch\n"<<endl;
        }
        friend Distance operator +(Distance, Distance);
        friend void operator <(Distance, Distance);
};

Distance operator +(Distance d1, Distance d2)
{
    Distance d3;
    d3.feet = d1.feet + d2.feet;
    d3.inch = d1.inch + d2.inch;
    if(d3.inch >= 12)
    {
        int q = d3.inch /12;
        int r = d3.inch-(q*12);
        d3.feet += q;
        d3.inch = r; 
        
    }
    return d3;
}

void operator <(Distance d1, Distance d2)
{
    float inch = (d1.feet*12) + d1.inch;
    float inch2 = (d2.feet*12) + d2.inch;

    if(inch < inch2)
    {
        cout<<d2.feet<<"feet and"<<d2.inch<<"inch";
    }
    else
    {
        cout<<d1.feet<<"feet and"<<d1.inch<<"inch";
    }
}

int main()
{
    Distance d1, d2(20, 14);
    Distance d3;
    d1.show();
    d2.show();
    d3 = d1+d2;
    d3.show();
    d1<d2;
    return 0;
}