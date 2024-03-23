#include<iostream>
using namespace std;
// [] -> ()   cant be friend function must be member

class subscribt
{

public:
    int arr[3];

   subscribt(int a,int b,int c)
    {
        arr[0]=a;
        arr[1]=b;
        arr[2]=c;
    }
    int operator [](int position)
    {
       return arr[position];
       
    }

    

    
};



int main()
{
    subscribt ob1(22,33,44);
    cout<<ob1[2]<<endl;
    cout<<ob1[1]<<endl;
   
    
   
    
    return 0;
}