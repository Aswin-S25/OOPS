#include<bits/stdc++.h>
using namespace std;

class Area
{
    int l, b;
    public:
    Area(int a, int c)
    {
        l = a;
        b = c;
    }
    void cal()
    {
        cout<<"area = "<<l*b<<endl;
    }
};

int main()
{
    Area a1(10, 20); //paramietarized constructor
    a1.cal(); // area calcaulating
    return 0;
}