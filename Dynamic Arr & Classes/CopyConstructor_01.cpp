#include<iostream>
using namespace std;
class learnConstructor
{
    private:
    int data;
    int xyz;
    public:
    learnConstructor(int data,int xyz)
    {
        this->data=data;
        this->xyz=xyz;
    }
    learnConstructor(learnConstructor&oldObj)
    {
        this->data=oldObj.data;
        this->xyz=oldObj.xyz;
    }
    void display()
    {
        cout<<"This is data "<<data<<"\n";
        cout<<"This is xyz "<<xyz<<"\n";
    }
};
int main()
{
    learnConstructor ob1(122,133);
    ob1.display();
    learnConstructor ob2(ob1);
    ob2.display();
    return 0;
}