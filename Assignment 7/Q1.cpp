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
        // cout << "Employee Parmeterless Ctor" << endl;
        empid = 0;
        salary = 0;
    }
    Employee(int empid, double salary)
    {
        // cout << "Employee Parmeterized Ctor" << endl;
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
        // cout << "Employee Destructor" << endl;
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
        // cout << "Manager Parameterless Ctor - " << endl;
        bonus = 0;
    }
    Manager(int empid, double salary, double bonus) : Employee(empid, salary)
    {
        // cout << "Manager Parameterized Ctor - " << endl;
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
        // cout << "Manager Destructor" << endl;
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
        // cout << "Salesman Parameterless Ctor - " << endl;
        comm = 0;
    }
    SalesMan(int empid, double salary, double comm) : Employee(empid, salary)
    {
        // cout << "SalesMan Parameterized Ctor - " << endl;
        this->comm = comm;
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
        // cout << "SalesMan Destructor" << endl;
    }
};

class SalesManager : public Manager, public SalesMan
{
public:
    SalesManager()
    {
        // cout << "SalesManager Parameterless ctor" << endl;
    }

    SalesManager(int empid, double salary, double bonus, double comm)
    {
        // cout << "SalesManager Paremeterized ctor" << endl;
        this->setEmpId(empid);
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
        // cout << "SalesManager Destructor" << endl;
    }
};
int menu()
{
    int choice;
    cout << "Accept Employee" << endl;
    cout << "1.Accept Manager" << endl;
    cout << "2.Accept Salesman" << endl;
    cout << "3.Accept Sales-Manager" << endl;
    cout << "4.Display the count of all employees with respect to designation" << endl;
    cout << "5.Display All Managers" << endl;
    cout << "6.Display All Salesman" << endl;
    cout << "7.Display All SalesManagers" << endl;
    cout << "Enter choice : " << endl;
    cin >> choice;

    return choice;
}
int main()
{
    // int size;
    // cout << "Enter number of entries : " << endl;
    // cin >> size;
   
    Employee *ptr[10];
    int choice;
    int count = 0;

    while ((choice = menu()) != 0)
    {
    int countOfManagers = 0;
    int countOfSalesMan = 0;
    int countOfSM = 0;
        switch (choice)
        {

        case 1:
            if (count < 10)
            {
                ptr[count] = new Manager();
                ptr[count]->accept();
                count++;
            }
            cout << "Array is full" << endl;
            break;

        case 2:
            if (count < 10)
            {
                ptr[count] = new SalesMan();
                ptr[count]->accept();
                count++;
            }
            else
                cout << "Array is full" << endl;
            break;

        case 3:
            if (count < 10)
            {
                ptr[count] = new SalesManager();
                ptr[count]->accept();
                count++;
            }
            else
                cout << "Array is full" << endl;
            break;

        case 4:

            for (int i = 0; i < count; i++)
            {

                if (typeid(*ptr[i]) == typeid(Manager))
                {
                    countOfManagers++;
                }
                else if (typeid(*ptr[i]) == typeid(SalesMan))
                {
                    countOfSalesMan++;
                }
                else if (typeid(*ptr[i]) == typeid(SalesManager))
                {
                    countOfSM++;
                }
            }
            cout << "Count of managers : " << countOfManagers << endl;
            cout << "Count of salesman : " << countOfSalesMan << endl;
            cout << "Count of sales-managers : " << countOfSM << endl;
            cout << "************************************************************************" << endl;
            
            
            break;

        case 5:
            for (int i = 0; i < count; i++)
            {
                if (typeid(*ptr[i]) == typeid(Manager))
                {
                    ptr[i]->display();
                }
            }
            cout << "************************************************************************" << endl;

            break;

        case 6:
            for (int i = 0; i < count; i++)
            {
                if (typeid(*ptr[i]) == typeid(SalesMan))
                {
                    ptr[i]->display();
                }
            }
            cout << "************************************************************************" << endl;

            break;

        case 7:
            for (int i = 0; i < count; i++)
            {
                if (typeid(*ptr[i]) == typeid(SalesManager))
                {
                    ptr[i]->display();
                }
            }
            cout << "************************************************************************" << endl;

            break;

        default:
            cout << "Enter correct choice" << endl;
            break;
        }
    }

    for (int i = 0; i < count; i++)
    {
        delete ptr[i];
        ptr[i] = NULL;
    }

    return 0;
}