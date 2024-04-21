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
class matrix {
public:
    int mat[2][2];
    matrix() {
        mat[0][0] = 3;
        mat[0][1] = 4;
        mat[1][0] = 1;
        mat[1][1] = 2;
    }
    // Return type is now a pointer to an int, enabling access to rows.
    int* operator[](int index) {
        return mat[index];
    }
};



int main()
{
    subscribt ob1(22,33,44);
    cout<<ob1[2]<<endl;
    cout<<ob1[1]<<endl;
    matrix obm;
    cout << obm[0][0] << endl; // Access the element at row 0, column 0
    cout << obm[1][1] << endl; // Access the element at row 1, column 1
   obm[1][1]=-9;
   cout<<obm[1][1];
    
   
    
    return 0;
}