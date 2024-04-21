#include<iostream>
using namespace std;

class marks {
private :
	int number;
public:
	marks() {
		number = 0;
	}
	marks(int num) {
		this->number = num;
	}
	void display() {
		cout << "Total marks are : " << number << endl;
	}
	void operator +=(int bonus) {
		number += bonus;
	}
	friend void operator -=(marks& currentobj, int num);
	void operator++() {
		++this->number; 
	}
	friend void operator--(marks& m) {
		--m.number;
	}
	marks operator++(int) {
		marks newobject(*this);   //*this will store the value which is passed
		number++;
		return newobject;
	}
	friend marks operator--(marks& obj, int) {   //we have to pass the current object in the friend function
		marks newobject(obj);   //obj will store the value which is passed
		obj.number--;
		return newobject;
	
	}
};
void operator -=(marks& currentobj, int num) {
	currentobj.number -= num;
}

int main() {
	marks m1(20);
	m1 += 20;
	marks m2(30);
	m2 -= 20;
	m1.display();
	m2.display();
	marks m3(100);
	
	(m3++).display();
	
	(m3--).display();
}