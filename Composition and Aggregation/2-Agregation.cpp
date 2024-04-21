#include<bits/stdc++.h>
#include<string>
using namespace std;

//aggregation--> aik class ka under dosre class ka member add karna lakin the both classes are not dependant on each other
//in composition agar ham people class ko delete karta to birthday ko bhe delte hona partha tha
//lakin aggregation is just like if there is a relation b/e student and department and department delete than student can exist independently

class instructor
{
private:
    string name;
    int phone_no; 
public:
    instructor(string n="",int p=0)
    {
        name=n;
        phone_no=p;
    }
    void setInsData(string n,int p)
    {
        name=n;
        phone_no=p;
    }
    void print()
    {
        cout<<"instructor name is "<<name<<endl;
        cout<<"Phone no is "<<phone_no<<endl;
    }
   
};
class textBook
{
private:
    string title;
    int book_id;
public:
    textBook(string t="",int b=0)
    {
        title=t;
        book_id=b;
    }
    void setBookData(string t="",int b=0)
    {
        title=t;
        book_id=b;
    }
    void print()
    {
        cout<<"Book name is "<<title<<endl;
        cout<<"book no is "<<book_id<<endl;
    }
    
};
class course {
private:
    string course_Name;
    instructor* inst1;   // Pointer to instructor
    textBook* book1;     // Pointer to textBook

public:
    course(string course, instructor* ins, textBook* book)
        : course_Name(course), inst1(ins), book1(book) {}

    void print() {
        cout << "Course Name is " << course_Name << endl;
        inst1->print();
        book1->print();
    }
};

 int main() {
    instructor mustafa("Mustafa", 344133);
    textBook oopBook("OOP", 123);

    course c1("oop", &mustafa, &oopBook);
    c1.print();
    return 0;
 }