#include<iostream>
using namespace std;
char** fun(char arr[], int& row)
{
    row = 0;
    char** ptr = nullptr;
     //--------------------------------------------------
    //counting how many rows we need to create dynamically counting using sapce and null

    for ( int i = 0; arr[i]!='\0' ;  i++)
    {
        if (arr[i] == ' '||arr[i+1]=='\0')
            row++;
    }
      //---------------------------------------------
    ptr = new char* [row];  //creating a dynamic array to store adress of 2d
    int in = 0;
    int count = 0;
    for (int j = 0; arr[j]!='\0'; j++)
    {
        if (arr[j] != ' ')
        {
            count++;
        }
        else
        {
            *(ptr + in) = new char[count + 1];
            count = 0;
            in++;
        }
    }
    *(ptr + in) = new char[count + 1]; //creating a column and storing its starting adress at ptr 1D & (count + 1) as /0 also present at end
     //---------------------------------------
    //tokenizing characters
    int index = 0,col=0;
    for (int j = 0; arr[j] != '\0'; j++)
    {
        if (arr[j] != ' ')
        {
            *(*(ptr + index) + col) = arr[j];
            col++;
        }
        else
        {
            *(*(ptr + index) + col) = '\0';
            col = 0;
            index++;
        }
    }
    *(*(ptr + index) + col) = '\0';
    return ptr;
}
int main()
{
    int row = 0;
    char sent[100];
    cout << "Enter sentence" << endl;
    cin.getline(sent, 100);
    char** arr=fun(sent, row);
    for (int i = 0; i < row; i++)
    {
        
        for (int j = 0; arr[i][j] != '\0'; j++)
        {
            cout << *(*(arr+i)+j) << " ";
        }
        cout << endl;
    }
   
    for (int i = 0; i < row; i++)
    {
        delete[]arr[i];
        arr[i] = nullptr;
    }
    delete[]arr;
    arr = nullptr;

}