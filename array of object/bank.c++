#include<bits/stdc++.h>
using namespace std;

class bank
{
    string name, type;
    int acc_no, amount = 100;

    public:
    void deposit(int);
    void withdraw(int);
    void interest(int,int);
    void balance();

};

void bank :: deposit(int n)
{
    amount += n;
    cout<<"\namount credited successfully\n";
    cout<<"balace = "<<amount;
}

void bank :: withdraw(int n)
{
    if(amount < 0)
    {
        cout<<"\nno balance money\n";
        cout<<"balace = "<<amount;
    }
    else if(amount>0 && amount < n)
    {
        cout<<"insufficent bank balance";
    }
    else
    {
        amount-= n;
        cout<<"\nwithdrawed successfully\n";
        cout<<"balace = "<<amount;
    }
}

void bank :: interest(int n, int r)
{
    float i;
    i = (amount*n*r)/100;
    cout<<"\ninterest = "<<i;
}

int main()
{
    bank obj[3];

    for(int i=0;i<3;i++)
    {
        cout<<"\n\n\ndetails of obj "<<i+1;
        obj[i].deposit(3000);
        obj[i].withdraw(1000);
        obj[i].interest(2, 40);
    }

    return 0;
}