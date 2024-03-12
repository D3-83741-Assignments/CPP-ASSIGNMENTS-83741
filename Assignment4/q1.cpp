#include<iostream>
using namespace std;

class date 
{
    private:
    int day;
    int month;
    int year;

    public:
    void acceptDate()
    {
        // cout<<"enter the date"<<endl;
        cout<<"enter the day"<<endl;
        cin>>day;
        cout<<"enter the month"<<endl;
        cin>>month;
        cout<<"enter the year"<<endl;
        cin>>year;
    }
    void displayDate(){

        cout<<day<<":"<<month<<":"<<year <<endl;
    }
};
class person
{
    private:
    string name;
    string address;
    date dob;
    public:
    
    void acceptData()
    {
        cout<<"enter the details about person"<<endl;
        cout<<"Enter the person name:"<<endl;
        cin>>name;
        cout<<"Enter the person address:"<<endl;
        cin>>address;
        cout<<"enter the persons birth of date"<<endl;
        dob.acceptDate();
    }
    void displayData()
    {
        cout<<"person name is:"<<name<<endl;
        cout<<"person address is:"<<address<<endl;
        cout<<"person date of birth is:"<<endl;
        dob.displayDate();

    }
};
class employee
{
    private:
    int empid;
    float salary;
    string name;
    date doj;
public:
void acceptEmpData()
{
    cout<<"employee data"<<endl;
    cout<<"enter the employee id:"<<endl;
    cin>>empid;
    cout<<"enter the employee salary:"<<endl;
    cin>>salary;
    cout<<"enter the employee name"<<endl;
    cin>>name;
    cout<<"joing date of employee"<<endl;
    doj.acceptDate();
    

    cout<<"--------------------------"<<endl;
}
void displayEmpData()
{
    cout<<"Id:-"<<empid<<endl;
    cout<<"salary:-"<<salary<<endl;
    cout<<"name:-"<<name<<endl;
    doj.displayDate();
}

};
int menu()
{
    int choice;
    cout<<"1.add person data"<<endl;
    cout<<"2.add employee details"<<endl;
    cout<<"3.show persons data:"<<endl;
    cout<<"4.show employee data"<<endl;
    cin>>choice;
    return 0;

}

int main()
{
    employee e;
    e.acceptEmpData();
    e.displayEmpData();
    person p;
     p.acceptData();
     p.displayData();
    // int choice;
    
    // while((choice=menu()!=0))
    // {
    //     switch (choice)
    //     {
            
    //     case 1:
    //     e.acceptEmpData();
    //         break;
    //     case 2:
        // e.displayEmpData();
        //     break;
        // case 3:
        //     p.acceptData();
        //     break;
        // case 4:
        // p.displayData();
        //     break;
        
        // default:
        // cout<<"wrong choice enterd:"<<endl;
        //     break;
        // }
   // }
    
    return 0;
}
