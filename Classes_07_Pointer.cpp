#include<iostream>
using namespace std;
class rectangle
{
    public:
    int length;
    int breath;

    rectangle()
    {
        length=0;
        breath=0;
    }
    int area()
    {
        return length*breath;
    }

};

int main()
{
    rectangle r1;
    r1.length=8;
    r1.breath=12;
    cout<<r1.area()<<endl;
    rectangle *ptr;
    ptr=&r1;
    
    cout<<ptr->area()<<endl; //instead using * we use cap

//let create object at heap
    rectangle *ptr2=new rectangle;
    ptr2->length=12;
    ptr2->breath=12;
    cout<<ptr2->area();


    return 0;
}