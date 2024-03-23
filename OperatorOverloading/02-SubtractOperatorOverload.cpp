#include<iostream>
using namespace std;
class Subtract
{

public:
    int a;
    int b;

    Subtract(int a,int b)
    {
        this->a=a;
        this->b=b;
    }
    Subtract operator-(Subtract & obj)
    {
        Subtract temp(0,0);
        temp.a=this->a - obj.a;
        temp.b=this->b - obj.b;
        return temp;
    }
    void print()
    {
        cout<<a<<" "<<b<<"\n";
    }
};


int main()
{
    Subtract ob1(7,9),ob2(2,3);
    ob1.print();
    ob2.print();
    Subtract ob3=ob1-ob2;
    ob3.print();
    return 0;
}