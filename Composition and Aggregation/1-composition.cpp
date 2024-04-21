#include<iostream>
using namespace std;
//aik class ka under dosara class ka obj as a member add karna-->composition
//process of building comple obj from simple one
//dono classes ka darmayan has a ka relation ho

class birthday
{
    private:
    int day;
    int month;
    int year;
    public:
    birthday(int d=0,int m=0,int y=0)
    {
        cout<<"Constructor of bithday"<<endl;
        day=d;
        month=m;
        year=y;
    }
    void setDate(int d=0,int m=0,int y=0)
    {
        day=d;
        month=m;
        year=y;
    }
    void print()
    {
        cout<<"Date "<<day<<" Month: "<<month<<" Year: "<<year<<endl; 
    }
    ~birthday()
    {
        cout<<"Destructor of birthday class"<<endl;
    }
};

class people
{
    private:
    string name;
    birthday obj;
    public:
    people(string n="",int d=0,int m=0,int y=0)
    {
        cout<<"Constructor of people"<<endl;
        name=n;
        obj.setDate(d,m,y);
    }
    void printInfo()
    {
        cout<<"Name is "<<name<<endl;
        cout<<"Date of Birth is "<<endl;
        obj.print();
    }
    ~people()
    {
        cout<<"Destructor of people class"<<endl;
    }

};
int main()
{
    people P("ali",10,2,2004);
    P.printInfo();

    return 0;
}