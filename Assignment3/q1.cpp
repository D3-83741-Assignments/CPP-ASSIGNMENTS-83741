// Time()
// Time(int h,int m,int s)
// getHour()
// getMinute()
// getSeconds()
// printTime()
// setHour()
// setMinute()
// setSeconds()

#include<iostream>
using namespace std;
class Time
{
    private:
    int h;
    int m;
    int s;
    public:

    Time ()
    {
        this->h=0;
        this->m=0;
        this->s=0;
    
    }
    Time(int h, int m,int s)
    {
        this->h=h;
        this->m=m;
        this->s=s;
    }
    void Displaytime()
    {
        cout<<h<<":"<<m<<":"<<s<<endl;
    }
    int getHour()
    {
        return this->h;
    }
    int getMinutes()
    {
        return this->m;
    }
    int getSeconds()
    {
         return this->s;
    }
    void setHour(int h){
        this->h=h;
    }
    void setMinutes(int m){
        this->m=m;
    }
    void setseconds(int s){
        this->s;
    }
};


int main ()
{
    Time *ptr[5];
    ptr [0]=new Time;
    ptr [1]= new Time(12,53,56);
    ptr [2]= new Time(02,53,31);
    
    for (int i=0;i<3;i++)
    {
        ptr [i]->Displaytime();
    }

    ptr[1]->setHour(03);
    cout<<ptr[1]->getHour()<<endl;
    ptr[0]->setHour(05);
    cout<<ptr[0]->getHour()<<endl;

    for (int i=0;i<3;i++)
    {
        ptr [i]->Displaytime();
    }

     for (int i=0;i<3;i++)
     {
     delete ptr[i];
     ptr[i]=NULL;

     }
     return 0;
 }



