#include<iostream>
using namespace std;

class stack{
    private:
    int  top, cap ,*ptr;
    
    public:
    stack(int size =5)
    {
        this->cap;
        top =-1;
        ptr=new int[cap];
    }
    int isempty(){
        if (this->top==-1)
        {
            return 1;
        }
        else return 0;
    }
    int isfull()
    {
        if (this->top==this->cap-1){return 1;}
        
    
        else return 0;
    }
    


    void push(int element)
    {
        if(isfull()){
        cout<<"stack overflow"<<endl;

        }
         else{
            this->ptr[++this->top]=element;
         }
    }
    int pop(){
        if (isempty())
        {
            cout<<"stack is empty"<<endl;
             return -1;
        }
        else {
            this->top--;
            return this->ptr[this->top];
        }
        
    }
    int peek()
    {
        if (isempty())
        {
            cout<<"stck is empty:"<<endl;
            return -1;
        }
        return this->ptr[this->top];
    }

    void display()
    {
        if (isempty())
        {
            cout<<"stck is empty;"<<endl;
           
        }else 
        {
            cout<<"stack elements are:"<<endl;
         for (int i=0;i<=this->top;i++)
         {
            cout <<this->ptr[i]<<endl;
         }   
        }
        
    }
};
 int main()
    {
        stack s(4);
        s.push(10);
        s.push(16);
        s.push(14);
        s.push(12);

        s.display();
        cout<<s.peek()<<endl;//top element
        return 0;

    }
