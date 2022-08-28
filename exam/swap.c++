#include<bits/stdc++.h>
using namespace std;

class cm
{
    int x, y;
    public:
    cm()
    {
        x=0;
        y=0;
    }
    
    cm(int a, int b)
    {
        x = a;
        y = b;
    }

 
    void show()
    {
        cout<<x<<" "<<y<<endl;
    }
};

void swap(cm *c1, cm *c2)
{
    cm temp;
    temp = *c1;
    *c1 = *c2;
    *c2 = temp;
}


int main()
{
    cm c1(10, 20), c2(30, 40);
    cm *ptr1, *ptr2;
    ptr1 = &c1;
    ptr2 = &c2;
    swap(ptr1, ptr2);

    ptr1->show();
    ptr2->show();

    return 0;
}