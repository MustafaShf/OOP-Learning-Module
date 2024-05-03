#include <iostream>
using namespace std;
class DynamicArray {
public:
    int size;
    int* ptr;
    int elements;
    DynamicArray()
    {
        size = 5;
        ptr = new int[size] {0};
        elements = 0;
        cout << "Default constructor" << endl;
    }
    DynamicArray(int s)
    {
        size = s;
        ptr = new int[size] {0};
        elements = 0;
        cout << "parameterized constructor" << endl;
    }
    DynamicArray(int arr1[],int siz)
    {
        size = siz;
        ptr = new int[size];
        elements = 0;
        for (int i = 0; i < size; i++)
        {
            ptr[i] = arr1[i];//*(p+i)=arr[i];
            elements += 1;
        }
        cout << "parameterized 2 constructor" << endl;
    }
    DynamicArray(DynamicArray &obj)
    {
        size = obj.size;
        ptr = new int[size];
        elements = 0;
        for (int i = 0; i < size; i++)
        {
            ptr[i] = *((obj.ptr)+i);
            elements += 1;
        }
        cout << "parameterized 3 constructor" << endl;
    }
    void display()
    {
        cout << "Display" << endl;
        for (int i = 0; i < elements; i++)
        {
            cout << ptr[i] << endl;
        }
    }
    ~DynamicArray()
    {
        delete []ptr;
        cout << "Destructor " << endl;
    }
};
int main()
{
    int a[3] = { 2,4,5 };
    DynamicArray o1(a, 3);
    o1.display();
    DynamicArray o2(o1);
    o2.display();

}