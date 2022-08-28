#include<bits/stdc++.h>
using namespace std;

class Date
{
    int days, month, year;
    public:
        void getData()
        {
            cin>>days>>month>>year;
        }
        void show()
        {
            cout<<days<<"/"<<month<<"/"<<year<<endl;
        }
        void operator --();
};

void  Date::operator--()
{
    if(days == 1)
    {
        if(month == 4 && month == 6 && month == 9 && month == 11)
        {
            days = 31;
            month--;
        }
        else if(month == 3)
        {
            if(year % 400 == 0 || year%100!=0 || year%4==0)
                days = 29;
            else
                days = 28;
            month--;
        }
        else if(month == 1)
        {
            days = 31;
            month = 12;
            year--;
        }
        else if(month == 2)
        {
            days = 31;
            month = 1;
        }
        else
        {
            days = 30;
            month--;
        }
    }
    else
        days--;
}

int main()
{
    Date d;
    d.getData();
    d.show();

    --d;
    d.show();
    return 0;
}