#include<iostream>
using namespace std;
// +=  -=  *=  /=

class shortHand
{

public:
    int a;
    int b;

    shortHand(int a,int b)
    {
        this->a=a;
        this->b=b;
    }
    void operator +=(int value)
    {
        this->a+=value;
        this->b+=value;
       
    }

    friend void operator-=(shortHand &obj,int value);

    void print()
    {
        cout<<a<<" "<<b<<"\n";
    }
};
void operator-=(shortHand &obj,int value)
{
 obj.a-=value;
 obj.b-=value;
}


int main()
{
    shortHand ob1(22,33);
    ob1.print();
    ob1+=12;
    ob1.print();
    ob1-=12;
    ob1.print();
   
    
   
    
    return 0;
}