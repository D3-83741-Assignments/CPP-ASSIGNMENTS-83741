#include<iostream>
using namespace std;

class tollBooth
{
    private:
    unsigned int totalcars;
    double amount_collected;

    public:
    void payingCars()
    {
        cout<<"paying car count:"<<totalcars

    }
    void nonPayingcars()
    {
      
    }

    void tollBoothdata()
    {
      cout<<"total cars:"<<totalcars;
      cout<<"Toatl money collected :"<<amount_collected;

    }
};
int menu()
{
    int choice;

    cin>>choice;
}
    int main()
    {
        tollBooth t;
        int choice;
        while ((choice=menu()!=0))
        {
            switch (choice)
            {
            case 1:
            t.payingCars();
                break; 
            
            case 2:
            t.nonPayingcars();
                break;

            case 3:
            t.tollBoothdata();
                break;
            

            

            
            default:
                break;
            }
        }
        

    }

    










}
int main()
{
    int choice;
    
}