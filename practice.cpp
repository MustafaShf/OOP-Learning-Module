#include<iostream>
using namespace std;
int main()
{
    int length=7;
    int arr[7]={1,5,4,2,9,9,9};
    int k=3;
    int *ans=new int[k];
    int start=0;
    int end=length-1;
    int currSum=0;
    int maxSum=0;
    for (int i = 0; i < k; i++)
    {
        ans[i]=arr[i];
       currSum+=arr[i];
    }
    maxSum=currSum;
    for (int i = k; i < length; i++)
    {
        for (int i = 0; i < k; i++)
    {
        ans[i]=arr[i];
       currSum+=arr[i];
    }
       currSum+=arr[i]-arr[start];
       maxSum=max(currSum,maxSum);
       start++;
      // currSum=0;
    }
    cout<<maxSum;
    


    return 0;
}