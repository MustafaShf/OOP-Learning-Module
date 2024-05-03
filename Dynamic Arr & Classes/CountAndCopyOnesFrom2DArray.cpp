#include <iostream>
using namespace std;
void createandpopulate(int arr[][5], int rows, int cols, int **&ptr)
{
    int count = 0;
    ptr = new int *[rows];
    for (int i = 0; i < rows; i++)
    {
        count = 0;
        for (int j = 0; j < cols; j++)
        {
            if (*(*(arr + i) + j) == 1)
                count++;
        }
        *(ptr + i) = new int[count + 1]; //creating col of count+1 bec at first row we want to store count
        *(*(ptr + i) + 0) = count; //storing count at first position of every row
        for (int k = 1, j = 0; k <= count; j++)
        {
            if (*(*(arr + i) + j) == 1)
            {
                
                *(*(ptr + i) + k) = *(*(arr + i) + j); 
                k++;
            }
        }
    }
}
int main()
{
    int **ptr = 0;
    int rows = 5;
    int arr[5][5] = {{1, 1, 0, 0, 1}, {1, 0, 0, 0, 1}, {0, 0, 0, 0, 1}, {0, 0, 0, 0, 0}, {1, 1, 1, 1, 1}};
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"------------------"<<endl;
    createandpopulate(arr, rows, 5, ptr);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= ptr[i][0]; j++)
        {
            if(j==0)
            cout << ptr[i][j] << "| ";
            else
            cout << ptr[i][j] << " ";

        }
        cout << endl;
    }
    
    for (int i = 0; i < rows; i++)
    {
        delete[] *(ptr + i); // delete [] ptr[i];
        ptr[i] = nullptr;
    }
    delete[] ptr;
}