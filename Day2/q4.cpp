#include<iostream>
using namespace std;

class Address
{
    string building;
    string street;
    string city;
    int pin;
public:
    Address(){
        building="NULL";
        street="NULL";
        city="NULL";
        pin=00000;
    }    
    
     Address(string building,string street, string city,int pin)
    {
        this->building=building;
        this->street=street;
        this->city=city;
        this->pin=pin;
    }
    void accept()
    {
        cout<<"Enter the Address"<<endl;
        
        cout<<"Enter the building"<<endl;
        cin>>building;
        cout<<"Enter the street"<<endl;
        cin>>street;
        cout<<"enter the city"<<endl;
        cin>>city;
        cout<<"Enter the pin"<<endl;
        cin>>pin;
    }

    void display()
    {
        cout<<"Addresss"<<building<<","<<street<<","<<city<<","<<pin<<endl;
    }

    void set_building(string building)
    {
         this->building=building;
    }
    string get_building()
    {
        return this->building;
    }


	void set_street(string street)
    {
    this->street=street;
	}
    string get_street()
    {
        return this->street;
    }

	void set_city (string city)
    {
        this->city=city;
	}
    string get_city(){
        return this->city;
    }
	void set_pin(int value)
    {
        this->pin=pin;
    }
    int get_pin(int pin)
    {
        return this->pin;
    }
	
};

int main(){
    Address ad;
    ad.accept();
    ad.display();
    
    Address ad1("Matoshri","shahu street","sangli",415302);
    ad1.set_building("Shri");
    ad1.set_street("kolhapr street");
    ad1.set_city("kohlapur");
    ad1.set_pin(412355);
    printf("\n");
    printf("Address after set :");
    ad1.display();


}
