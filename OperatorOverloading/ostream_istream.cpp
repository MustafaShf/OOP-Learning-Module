#include<iostream>
using namespace std;

class pointLess
{
    public:
    int a;
    int b;
    pointLess()
    {
        a=10;
        b=20;
    }
    friend ostream& operator<<(ostream &out,const pointLess &obj);
     friend istream& operator>>(istream &ino, pointLess &obj);

};
ostream& operator<<(ostream &out,const pointLess &obj)
{
    out<<"obj a is "<<obj.a<<endl;
    out<<"obj b is "<<obj.b<<endl;
    //cout<<&out;
    return out;

}
istream& operator>>(istream &ino,pointLess &obj)
{
    ino>>obj.a;
    ino>>obj.b;
    //cout<<&out;
    return ino;

}

int main()
{
 pointLess obj;
 cout<<obj<<obj;
 cin>>obj;
}