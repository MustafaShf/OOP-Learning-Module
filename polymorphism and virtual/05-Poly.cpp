#include<iostream>
using namespace std;
class pet
{
    protected:
    string name;
    public:
    pet(string n) {name=n;}
    virtual void MakeSound(){cout<<name<<" the pet say shh\n";}
    void wakeup(){MakeSound();}

};
class cat:public pet
{
    public:
    cat(string n):pet(n){};
    void MakeSound(){cout<<name<<" the cat say Meow\n";}
     //void duck(){;}
};
class Dog:public pet
{
    
    public:
    Dog(string n):pet(n){};
    void MakeSound(){cout<<name<<" the Dog say boww\n";}

};
int main()
{
    
    cat* acat;
    Dog* adog;
    acat=new cat("kitty");
    adog=new Dog("dog");
     
    
     acat->MakeSound();
     acat->wakeup();
    adog->MakeSound();
     acat->wakeup();

     
    return 0;
}