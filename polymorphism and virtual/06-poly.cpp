#include<iostream>
using namespace std;
class A
{
    public:
    void fun1(){cout<<"This is fun1 of A\n";}
    virtual void fun2(){cout<<"This is fun2 of A\n";}
    void fun3(){cout<<"This is fun3 of A\n";}
    virtual~A(){cout<<"This destructor of A\n";}
};
class B: public A
{
    public:
    virtual void fun1(){cout<<"This is fun1 of b\n";}
    virtual void fun2(){cout<<"This is fun2 of b\n";}
    void fun3(){cout<<"This is fun3 of b\n";}
    ~B(){cout<<"This destructor of b\n";}
};
class C:public B
{
    public:
    void fun1(){cout<<"This is fun1 of C\n";}
     void fun2(){cout<<"This is fun2 of c\n";}
    virtual void fun3(){cout<<"This is fun3 of c\n";}
    ~C(){cout<<"This destructor of c\n";}
};
// Object Slicing happens when an object of a derived class is assigned to an object of a base class, thereby slicing off the parts that are not part of the base class. This typically happens with value assignment, not with references or pointers.
// In your scenario, you're passing the object objj by reference to outFun. This maintains the whole object including its derived parts, hence no slicing occurs.
void outFun(B & obj)
{
    obj.fun1();
    obj.fun2();
    obj.fun3();
}
int main()
{
    {C objj;
    outFun(objj);
    }
    cout<<"----------\n";
    
    B*p=new C;
    delete p;
    return 0;
}