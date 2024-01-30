#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    int* pt = &a;
    int** ptr = &pt;
    int*** ptrr = &ptr;
    cout << a << endl;
    cout << &a << endl;
    cout << pt << endl;
    cout << &pt << endl;
    cout << *pt << endl;
    cout << ptr << endl;
    cout << &ptr << endl;
    cout << *ptr << endl;
    cout << **ptr << endl;
    cout << ptrr << endl;
    cout << &ptrr << endl;
    cout << *ptrr << endl;
    cout << **ptrr << endl;
    cout << ***ptrr << endl;
    return 0;
}

//output

// 10
// 0x7ffde94db21c    //abc
// 0x7ffde94db21c    //abc
// 0x7ffde94db220    //mno
// 10
// 0x7ffde94db220    //mno
// 0x7ffde94db228    //qrs
// 0x7ffde94db21c    //abc
// 10
// 0x7ffde94db228   //qrs
// 0x7ffde94db230   //xyz
// 0x7ffde94db220   //mno
// 0x7ffde94db21c   //abc
// 10