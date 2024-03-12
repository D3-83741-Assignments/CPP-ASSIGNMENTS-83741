#include<iostream>
using namespace std;
struct Date{
  
private :
    int day;
    int month;
    int year;

public:
     
    void initDate()
    {
        day==0;
        month==00;
        year==0000;

    }
    void acceptDateFromConsole()
    {
        cout<<"enter the day"<<endl;
        cin>>day;
        cout<<"enter the month"<<endl;
        cin>>month;
        cout<<"enter the year"<<endl;
        cin>>year;

    }
    void printDateOnConsole()
    {
        cout<<"day"<<day<<"month"<<month<<"year"<<year;

    }
    bool isLeapYear(){
        cin>>year;
        if ((year%4==0)&&(year%400==0 || year%100!=0))
        return true;
        else 
         return false;
    }
 
};
int menu()
{
    int choice;
    
    cout<<"1.ainite"<<endl;
    cout<<"2.accept"<<endl;
    cout<<"3.check leap year"<<endl;
    cout<<"enter your choice"<<endl;
    cin>>choice;
    return choice;

};
int main()

{

    struct Date d;
    int choice ;
    while((choice=menu()!=0))
    {
        switch (choice )
        {
            case 1:
            d.initDate();
            d.printDateOnConsole();
            break;
            case 2:
            d.acceptDateFromConsole();
            d.printDateOnConsole();
            break;
            case 3:
            if(d.isLeapYear())
                cout<<"leap year present\n";
            else
                cout<<"not leap year";
            break;
            default:
            cout<<"wrong choice entered";
            break;

        }
        return 0;
    }

}

