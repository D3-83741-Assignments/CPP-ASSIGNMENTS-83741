#include<iostream>

using namespace std;
class Student{
    int rollNo;
    int marks;
    string name;

public:
    void init()
    {
        rollNo=0;
        marks=0;
        name="NULL";
    }

    void printstudentOnConsel(){
        cout<<"students Details"<<endl;
        cout<<"Roll no."<<rollNo<<endl;
        cout<<"name."<<name<<endl;
        cout<<"marks"<<marks<<endl;

    }
    void acceptStudentFromConsole()
    {
        cout<<"enter the rollNo"<<endl;
        cin>>rollNo;
        cout<<"enter the name"<<endl;
        cin>>name;
        cout<<"enter the marks"<<endl;
        cin>>marks;

    }
    
};
int menu()
{
    int choice;
    cout<<"1.enter data"<<endl;
    cout<<"2.print the data"<<endl;
    cin>>choice;
    return choice;
}
int main(){
    Student s;
    int choice;

    while((choice =menu())!=0){
        switch (choice)

        {
        case 1:
        s.acceptStudentFromConsole();
        s.printstudentOnConsel();
            break;
        case 2:
        s.init();
        s.printstudentOnConsel();
        break;
        default:
        cout<<"wrong choice entered";
            break;
        }    
    } 
}
