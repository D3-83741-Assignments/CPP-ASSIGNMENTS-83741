#include <iostream>
using namespace std;

class Box
{
private:
    int length;
    int width;
    int height;
    int volume =0;
public:
    Box(){}
     void acceptBox()
    {
        cout<<"enter the length , width and height";
        cin >>length>>width>>height;
    }

    void calculateVolume(){
        cout<<"volume is"<<length*width*height<<endl;
    }   

};
int menu()
{
    int choice;
    cout<<"1.Enter the box properties"<<endl;
    cout<<"2.Show volume of box"<<endl;
    cin>>choice;
    return choice;
}
int main ()
{
    int choice;
    Box b;
    while((choice=menu())!=0){

        switch (choice)
        {
        case 1:
        b.acceptBox();
        break;
        case 2:
        
        b.calculateVolume();
        break;
        default:
        cout<<"wrong choice entered";
            break;
        }
    }

}
    
