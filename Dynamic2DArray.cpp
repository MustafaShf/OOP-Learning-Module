#include<iostream>
using namespace std;
int main()
{
    int** ptr = 0;
    int rows, cols;
    cout<<"Enter Rows and Columns"<<endl;
    cin >> rows >> cols;
    ptr = new int* [rows];
    for (int i = 0; i < rows; i++)
    {
        *(ptr + i) = new int [cols];
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++) {
            cout << "ptr[" << i << "][" << j << "]" << endl;
            cin >> *(*(ptr + i) + j);
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++) {
       
            cout<< *(*(ptr + i) + j)<<" ";
        }
        cout << endl;
    }
    for (int i = 0; i < rows; i++)
    {
        delete[] * (ptr + i);//delete [] ptr[i];
        ptr[i] = nullptr;
    }
    delete[]ptr;

}