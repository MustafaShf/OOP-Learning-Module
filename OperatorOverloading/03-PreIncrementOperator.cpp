#include<iostream>
using namespace std;
int a=10;
class preInc
{

public:
    int a;
    int b;

    preInc(int a,int b)
    {
        this->a=a;
        this->b=b;
    }
    preInc operator ++()
    {
        this->a++;
        this->b++;
        return *this;
       
    }
    void print()
    {
        cout<<a<<" "<<b<<"\n";
        cout<<::a;
    }
};


int main()
{
    preInc ob1(7,9);
    ob1.print();
    preInc temp=++ob1;
    temp.print();
    ob1.print();
    
   
    
    return 0;
}