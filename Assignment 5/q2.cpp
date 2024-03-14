
#include <iostream>
using namespace std;

class Product
{
protected:
    int id;
    string title;
    double price;

public:
    Product()
    {
        this->id = 0;
        this->title = "Default";
        this->price = 0;
    }
    Product(int id, string title, double price)
    {
        this->id = id;
        this->title = title;
        this->price = 0;
    }

    void setID(int id)
    {
        this->id = id;
    }
    void settitle(string title)
    {
        this->title = title;
    }
    void setPrice(double price)
    {
        this->price = price;
    }

    int getId()
    {
        return id;
    }
    string getTitle()
    {
        return title;
    }

    double getPrice()
    {
        return price;
    }

    virtual void acceptDetails()
    {
        cout << "Enter id :" << endl;
        cin >> id;
        cout << "Enter title :" << endl;
        cin >> title;
        cout << "Enter price :" << endl;
        cin >> price;
    }

    virtual void displayDetails()
    {
        cout << "id :" << id << endl;
        cout << "Title :" << title << endl;
        cout << "Price :" << price << endl;
    }
};

class Book : public Product
{
private:
    string author;

public:
    Book()
    {
        this->author = "ABC";
    }

    void acceptDetails()
    {
        Product::acceptDetails();
        cout << "Enter author name :" << endl;
        cin >> author;
    }
    void displayDetails()
    {
        Product::displayDetails();
        cout << "Author name :" << author << endl;
    }
};

class Tape : public Product
{
private:
    string artist;

public:
    Tape()
    {
        this->artist = "abc";
    }

    void acceptDetails()
    {
        Product::acceptDetails();
        cout << "Enter artist name :" << endl;
        cin >> artist;
    }
    void displayDetails()
    {
        Product::displayDetails();
        cout << "Artist's name :" << artist << endl;
    }
};
int menu()
{
    int choice;
    cout << "0.Exit" << endl;
    cout << "1.Enter book details " << endl;
    cout << "2.Display book details " << endl;
    cout << "3.Enter Tape details " << endl;
    cout << "4.Display tape details " << endl;
    cout << "5.Display all products details :" << endl;
    cout << "6.Display final bill" << endl;
    cout << "Enter your choice :" << endl;
    cin >> choice;
    return choice;
}

int main()
{
    int choice;
    int count = 0;
    Product *p[3];
    double book_total = 0;
    double tape_total = 0;
    double total = 0;

    while ((choice = menu()) != 0)

        switch (choice)
        {
        case 0:
            break;
        case 1:
            if (count < 3)
            {
                p[count] = new Book();
                p[count]->acceptDetails();
                count++;
            }
            else
                cout << "Three products already purchased " << endl;
            break;
        case 2:
            for (int i = 0; i < count; i++)
                if (typeid(*p[i]) == typeid(Book))
                    p[i]->displayDetails();
            break;
        case 3:
            if (count < 3)
            {
                p[count] = new Tape();
                p[count]->acceptDetails();
                count++;
            }
            else
                cout << "Three products already purchased " << endl;
            break;
        case 4:
            for (int i = 0; i < count; i++)
                if (typeid(*p[i]) == typeid(Tape))
                    p[i]->displayDetails();
            break;
        case 5:
            for (int i = 0; i < count; i++)
                p[i]->displayDetails();
            break;
        case 6:

            for (int i = 0; i < 3; i++)
            {
                if (typeid(*p[i]) == typeid(Book))
                    book_total += p[i]->getPrice();
                if (typeid(*p[i]) == typeid(Tape))
                    tape_total += p[i]->getPrice();
            }
            total = (book_total * 0.9) + (tape_total * 0.95);
            cout << "total price = " << total << endl;

            break;
        default:
            cout << "Invalid choice.....!" << endl;
            break;
        }
        return 0;

        for (int i = 0; i < count; i++)
            delete p[i];

    } 

    

