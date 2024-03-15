#include <iostream>
using namespace std;

class Employee
{
private:
    int empid;
    double salary;

public:
    Employee()
    {
        cout << "Employee Parmeterless Ctor" << endl;
        empid = 0;
        salary = 0;
    }
    Employee(int empid, double salary)
    {
        cout << "Employee Parmeterized Ctor" << endl;
        this->empid = empid;
        this->salary = salary;
    }
     void setEmpId(int empid)
    {
        this->empid = empid;
    }
    int getEmpId()
    {
        return this->empid;
    }
    void setSalary(int salary)
    {
        this->salary = salary;
    }
    int getSalary()
    {
        return this->salary;
    }
    virtual void accept()
    {
        cout << "Enter empid - ";
        cin >> empid;
        cout << "Enter salary - ";
        cin >> salary;
    }
    virtual void display()
    {
        cout << "Empid - " << empid << endl;
        cout << "Salary - " << salary << endl;
    }
    virtual ~Employee()
    {
        cout << "Employee Destructor" << endl;
    }
};

class Manager : virtual public Employee
{
private:
    double bonus;

protected:
    void acceptManager()
    {
        cout << "Enter bonus - ";
        cin >> bonus;
    }

    void displayManager()
    {
        cout << "Bonus - " << bonus << endl;
    }

public:
    Manager()
    {
        cout << "Manager Parameterless Ctor - " << endl;
        bonus = 0;
    }
    Manager(int empid, double salary, double bonus) : Employee(empid, salary)
    {
        cout << "Manager Parameterized Ctor - " << endl;
        this->bonus = bonus;
    }
 void setBonus(double bonus)
    {
        this->bonus = bonus;
    }
    int getBonus()
    {
        return this->bonus;
    }
    void accept()
    {
        Employee::accept(); 
        acceptManager();   
    }
    void display()
    {
        Employee::display();
        this->displayManager();
    }

    ~Manager()
    {
        cout << "Manager Destructor" << endl;
    }
};

class SalesMan : virtual public Employee
{
private:
    double comm;

protected:
    void acceptSalesman()
    {
        cout << "Enter Commission - ";
        cin >> comm;
    }

    void displaySalesman()
    {
        cout << "Commission - " << comm << endl;
    }

public:
    SalesMan()
    {
        cout << "Salesman Parameterless Ctor - " << endl;
        comm = 0;
    }
    SalesMan(int empid, double salary, double comm) : Employee(empid, salary)
    {
        cout << "SalesMan Parameterized Ctor - " << endl;
       
    }
    void setComm(double comm)
    {
        this->comm=comm;
    }
    double getComm()
    {
        return this->comm;
    }

    void accept()
    {
        Employee::accept();
        acceptSalesman();   
    }
    void display()
    {
        Employee::display();
        this->displaySalesman();
    }

    ~SalesMan()
    {
        cout << "SalesMan Destructor" << endl;
    }
};

class SalesManager : public Manager, public SalesMan
{
public:
    SalesManager()
    {
        cout << "SalesManager Parameterless ctor" << endl;
    }

    SalesManager(int empid, double salary, double bonus, double comm)
    {
        cout << "SalesManager Paremeterized ctor" << endl;
      
        
    }
    void accept()
    {
        Employee::accept(); 
        acceptManager();    
        acceptSalesman();   
    }
    void display()
    {
        Employee::display();
        displayManager();
        displaySalesman();
    }
    ~SalesManager()
    {
        cout << "SalesManager Destructor" << endl;
    }
};

int main()
{

    SalesManager obj(1, 2000, 100, 200);

    obj.accept();
    obj.display();

    
    Employee *eptr = new SalesManager();

    eptr->accept();
    eptr->display();
    delete eptr;
    eptr = NULL;

    return 0;
}