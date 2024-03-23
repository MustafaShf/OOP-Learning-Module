#include<iostream>
using namespace std;
class minusOP
{
private:
    int a;
    int b;
public:
    minusOP();
    minusOP(int c,int d);
    void print();
    void operator-();
    ~minusOP();
};

minusOP::minusOP()
{
    a=0;
    b=0;
}
minusOP::minusOP(int a,int b)
{
    this->a=a;
    this->b=b;
}

void minusOP::print()
{
    cout<<a<<" "<<b<<"\n";
}

void minusOP::operator-()
{
    a=-a;
    b=-b;

}

minusOP::~minusOP()
{
    cout<<"Destructer Called";
}

int main()
{
    minusOP ob1(7,8);
    ob1.print();
    -ob1;
    ob1.print();


    return 0;
}