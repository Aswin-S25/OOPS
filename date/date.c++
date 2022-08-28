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

Date :: void operator --()
{

}