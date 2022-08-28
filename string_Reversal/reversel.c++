#include<bits/stdc++.h>
using namespace std;

class Reverse
{
    char str[10], rev_str[10];
    public:
    void getdata()
    {
        cout<<"enter trhe names : ";
        cin.getline(str, 10);
    }
    
    void rev()
    {
        int i=0, j=0, n=0;
        while(str[i] != '\0')
        {
            i++;
            n++;
        }
        
        for(i=n-1;i>=-1;i--)
        {
            rev_str[j] = str[i];
            j++;
        }
    }
    
    void show()
    {
        cout<<rev_str;
    }
};

int main()
{
    Reverse r;
    r.getdata();
    r.rev();
    r.show();
    
    return 0;
}