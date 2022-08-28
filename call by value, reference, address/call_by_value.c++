#include<bits/stdc++.h>
using namespace std;

class Value
{
    int a, b;
    public:
    void swap1(int, int);
    void swap2(int&, int&);
    void swap3(int *, int *);
};

void Value :: swap1(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

void Value :: swap2(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

void Value :: swap3(int *x, int *y) {
   int temp;
   temp = *x; /* save the value at address x */
   *x = *y; /* put y into x */
   *y = temp; /* put x into y */
  
   return;
}
int main()
{
    Value v;
    int a=10, b=20;
    v.swap1(a, b);
    cout<<"\nvale after swapping in call by value\n";
    cout<<"a = "<<a<<" b = "<< b<<endl;
    
    v.swap2(a, b);
    cout<<"\nvale after swapping in call by value\n";
    cout<<"a = "<<a<<" b = "<< b<<endl;

    v.swap3(&a, &b);
    cout<<"\nvale after swapping in call by value\n";
    cout<<"a = "<<a<<" b = "<<b<<endl;

    return 0;
}