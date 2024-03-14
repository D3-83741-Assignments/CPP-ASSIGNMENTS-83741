#include <iostream>
using namespace std;

class date
{
private:
    int day;
    int month;
    int year;

public:
    date(int day, int month,int year) {}
    date()
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }
    void acceptDate()
    {

        cout << "enter the day" << endl;
        cin >> day;
        cout << "enter the month" << endl;
        cin >> month;
        cout << "enter the year" << endl;
        cin >> year;
    }
    void displayDate()
    {

        cout << day << ":" << month << ":" << year << endl;
    }
    void setday(int day)
    {
        this->day = day;
    }
    int getday()
    {
        return day;
    }
    void setmonth(int month)
    {
        this->month = month;
    }
    int getmonth()
    {
        return month;
    }
    void setyear(int year)
    {
        this->year =year;
    }
    int getyear()
    {
        return year;
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
        cout << "enter the details about person" << endl;
        cout << "Enter the person name:" << endl;
        cin >> name;
        cout << "Enter the person address:" << endl;
        cin >> address;
        cout << "enter the persons birth of date" << endl;
        dob.acceptDate();
    }
    void displayData()
    {
        cout << "person name is:" << name << endl;
        cout << "person address is:" << address << endl;
        cout << "person date of birth is:" << endl;
        dob.displayDate();
    }
    person()
    {
        this->name=name;
        this->address=address;
    }
    person(string name, string address,int day,int month,int year)
    {

    }
    void setname(string name)
    {
        this->name=name;
    }
    string getname()
    {
        return name;
    }
    void setaddress(string address)
    {
        this->address=address;
    }
    string getaddress()
    {
        return address;
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
        cout << "employee data" << endl;
        cout << "enter the employee id:" << endl;
        cin >> empid;
        cout << "enter the employee salary:" << endl;
        cin >> salary;
        cout << "enter the employee name" << endl;
        cin >> name;
        cout << "joing date of employee" << endl;
        doj.acceptDate();

        cout << "--------------------------" << endl;
    }
    void displayEmpData()
    {
        cout << "Id:-" << empid << endl;
        cout << "salary:-" << salary << endl;
        cout << "name:-" << name << endl;
        doj.displayDate();
    }
};
int main()
{
    employee e;
    e.acceptEmpData();
    e.displayEmpData();
    person p;
    p.acceptData();
    p.displayData();

    return 0;
}
