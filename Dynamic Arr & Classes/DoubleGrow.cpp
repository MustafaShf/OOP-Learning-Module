#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter Size of Arr"<<endl;
    cin>>size;
    int *arr=new int [size];
    //taking Elements
    for(int i=0;i<size;i++)
    {
        cout<<"Enter Element: ";
        cin>>arr[i];
    }
    size*=2;
    int *arr2=new int [size];
    int count=0;
    for(int i=0;i<size;i++)
    {
        arr2[count++]=arr[i];
        arr2[count++]=arr[i];
    }
    for(int i=0;i<size;i++)
    cout<<arr2[i]<<" ";
    
    delete []arr;
    arr=nullptr;

    return 0;
}