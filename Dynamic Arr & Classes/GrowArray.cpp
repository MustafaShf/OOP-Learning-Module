#include<iostream>
using namespace std;
int main()
{
    int size;
    int* ptr = nullptr;
    cout << "Input size" << endl;
    cin >> size;
    ptr = new int[size];
    int input;
    int index = 0;
    do
    {
        cout << "Input value that you want to store in array except -1" << endl;
        cin >> input;
        if (input == -1)
            break;
        if (index < size)
        {
            ptr[index]=input;     //*(ptr + index) = input;
            index++;
        }
        else
        {
             size += 2;
             int* temp = new int[size];
             cout << "Growing Array " << size << endl;
             for (int i = 0; i < index; i++)
             {
                 temp[i] = ptr[i];
             }
             delete[]ptr;
             ptr = temp;
             temp = nullptr;
             ptr[index++] = input;
        }

    }
    while (input != -1);
    for (int i = 0; i < index; i++)
        cout << ptr[i] << " , ";
    cout << "Loop end";
    delete[]ptr;
    ptr = nullptr;
}