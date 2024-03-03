#include<iostream>
using namespace std;
int main()
{
    int length=7;
    int arr[7]={1,2,3,4,5,6,7};
    int k=3;
    int start=0;
    int end=length-1;
    int currSum=0;
    int maxSum=0;
    for (int i = 0; i < k; i++)
    {
       currSum+=k;
    }
    maxSum=currSum;
    for (int i = k; i < length; i++)
    {
       currSum+=arr[i]-arr[start];
       maxSum=max(currSum,maxSum);
       start++;
      // currSum=0;
    }
    cout<<maxSum;
    


    return 0;
}