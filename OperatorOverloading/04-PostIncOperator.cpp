#include<iostream>
using namespace std;
class postInc
{

public:
    int a;
    int b;

    postInc(int a,int b)
    {
        this->a=a;
        this->b=b;
    }
    postInc operator ++(int)
    {
        postInc temp=(*this);
        this->a++;
        this->b++;
        return temp;
       
    }
    void print()
    {
        cout<<a<<" "<<b<<"\n";
    }
};


int main()
{
    postInc ob1(7,9);
    ob1.print();
    postInc temp=ob1++;
    temp.print();
    ob1.print();
    
   
    
    return 0;
}