#include<iostream>
using namespace std;
class pet
{
    protected:
    string name;
    public:
    pet(string n) {name=n;}
    void MakeSound(){cout<<name<<" the pet say shh\n";}
    void fuck(){;}

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
    pet* pet1,*pet2;
    cat* acat;
    Dog* adog;
    pet1=acat=new cat("kitty");
     pet2=adog=new Dog("dog");
     
     pet1->MakeSound();
     acat->MakeSound();
     pet2->MakeSound();
     adog->MakeSound();
    return 0;
}