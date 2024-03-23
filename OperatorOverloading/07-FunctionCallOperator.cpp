#include<iostream>
using namespace std;
//()

class FuncCall
{

public:
    int a;
    int b;

    FuncCall(int a,int b)
    {
        cout<<"Constructer call\n";
        this->a=a;
        this->b=b;
    }
    void operator ()(int value1,int value2)
    {
        cout<<"Function call operator\n";
        this->a = value1;
        this->b = value2;
       
    }

    

    void print()
    {
        cout<<a<<" "<<b<<"\n";
    }
};


int main()
{
    FuncCall ob1(22,33);
    ob1.print();
    ob1(11,12);
    ob1.print();

    
   
    
   
    
    return 0;
}