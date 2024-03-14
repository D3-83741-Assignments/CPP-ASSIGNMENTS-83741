#include <iostream>
using namespace std;
#define SWAP(a,b) {Student t = a; a = b; b = t;}
class Student
{
private:
    string name;
    string gender;
    int roll_no;
    int m1, m2, m3;

public:
    Student() : name(""), gender("Male"), roll_no(23), m1(90), m2(85), m3(83) {}
    void accept()
    {
        cout << "Enter Name : " << endl;
        cin >> name;
        cout << "Enter gender : " << endl;
        cin >> gender;
        cout << "Enter Roll_Number : " << endl;
        cin >> roll_no;
        cout << "Enter marks for subject 1 : " << endl;
        cin >> m1;
        cout << "Enter marks for subject 2 : " << endl;
        cin >> m2;
        cout << "Enter marks for subject 3 : " << endl;
        cin >> m3;
    }
    double calPercentage()
    {
        return (m1 + m2 + m3) * 100 / 300;
    }
    int get_roll_no()
    {
        return roll_no;
    }

    void display()
    {

        cout << "\nStudent Details :" << endl;
        cout << "Name :" << this->name << endl;
        cout << "gneder :" << this->gender << endl;
        cout << "Roll_Number :" << this->roll_no << endl;
        cout << "Percentage : " << calPercentage() << endl;
    }
};

void sortRecords(Student arr[], int size)
{
    int sel_pos, pos;
    for(int sel_pos = 0 ; sel_pos<size-1 ; sel_pos++)
    {
        for(int pos = sel_pos+1 ; pos<size; pos++)
        {
            if(arr[sel_pos].get_roll_no()>arr[pos].get_roll_no())
            {
                SWAP(arr[sel_pos],arr[pos]);
            }
        }
    }
}

int searchRecords(Student arr[], int roll_no, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i].get_roll_no() == roll_no)
            return i;
    }

    return -1;
}
int menu()
{
    int choice;
      cout << "\n0.Exit" << endl;
        cout << "1.Accept details of the student :" << endl;
        cout << "2.Display details of the student :" << endl;
        cout << "3.Searching student details :" << endl;
        cout << "4.Sorting student details" << endl;
        cout << "Enter your choice :" << endl;
        cin >> choice;
        return choice;
}
int main()
{
    int size;
    cout<<"Enter number of students to be register :"<<endl;
    cin>>size;
    Student *arr= new Student[size];
    int choice;
    int index;
   while((choice=menu())!=0)
    {
      
        while((choice=menu())!=0){
            switch (choice)
        {
        case 0:
            break;
        case 1:
            for (int i = 0; i < size; i++)
            {
                cout << "\nEnter details for student " << i + 1 << ":" << endl;
                arr[i].accept();
            }
            break;

        case 2:
            for (int i = 0; i < size; i++)
            {
                arr[i].display();
            }
            break;
        case 3:
            int roll_search;
            cout << "Enter roll number to be search :" << endl;
            cin >> roll_search;
            index = searchRecords(arr, roll_search, size);
            if(index != -1)
            {
               arr[index].display();
            }
            else
            cout<<"Student not found...!"<<endl;
            break;
        case 4:
            sortRecords(arr,size);
            for(int i = 0; i<size; i++)
            {
                arr[i].display();
            }
            break;
        default:
            cout << "Invalid choice...!" << endl;
            break;

        }
        
        }return 0;
    }
}