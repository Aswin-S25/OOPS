#include<bits/stdc++.h>
using namespace std;

class Student
{
    protected:
    int age, reg_id;
    string name;
    public:
        virtual void sort(){};
};

class Btech :public Student
{
    int mark;
    public:
    void getdata()
    {
        cin>>age>>reg_id>>name>>mark;
    }
    void show()
    {
        cout<<" "<<age<<" "<<reg_id<<" "<<name<<" "<<mark<<endl;
    }
    void sort()
    {
        Btech temp;
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<1;j++)
            {
                if(this[j].mark < this[j+1].mark)
                {
                    temp = this[j];
                    this[j] = this[j+1];
                    this[j+1] = temp;
                }
            }
        }
    }
};

 class Mtech :public Student
{
    float gpa;
    public:
    void getdata2()
    {
        cin>>age>>reg_id>>name>>gpa;
    }
     void show2()
     {
         cout<<" "<<age<<" "<<reg_id<<" "<<name<<" "<<gpa<<endl;
     }
     void sort()
     {
         Mtech temp;
         for(int i=0;i<3;i++)
         {
             for(int j=0;j<2;j++)
             {
                 if(this[j].gpa < this[j+1].gpa)
                 {
                     temp = this[j];
                     this[j] = this[j+1];
                    this[j+1] = temp;
                 }
             }
         }
     }
 };

int main()
{
    Btech b[10];
    Mtech m[10];
    for(int i=0;i<2;i++)
    {
      b[i].getdata(); 
    }
    b->sort();
    for(int i=0;i<2;i++)
    {
      b[i].show();
    }
    cout<<"mtech"<<endl;
    for(int i=0;i<2;i++)
    {
      m[i].getdata2(); 
    }
    m->sort();
    for(int i=0;i<2;i++)
    {
        m[i].show2();
    }
    
    return 0;
}