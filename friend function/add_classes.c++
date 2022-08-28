#include<bits/stdc++.h>
using namespace std;

class Sample2;

class Sample1
{
    int x;
    public:
        Sample1()
        {
            x = 10;
        }

        friend void add(Sample1, Sample2);
};

class Sample2
{
    int y;
    public:
        Sample2()
        {
            y = 10;
        }

        friend void add(Sample1, Sample2);
};

void add(Sample1 s1, Sample2 s2)
{
    cout<<"Add = "<<s1.x+s2.y<<endl;
}

int main()
{
    Sample1 s1;
    Sample2 s2;

    add(s1, s2);

    return 0;
}

