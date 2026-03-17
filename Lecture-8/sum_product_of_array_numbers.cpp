// WAF to calcultae sum and product of all numbers in an array

#include<iostream>
using namespace std;

int sum=0;
int product=1;
int sumArray(int arr[],int size)
{
    for(int i=0;i<=size-1;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}

int productArray(int arr[],int size)
{
    for(int i=0;i<=size-1;i++)
    {
        product=product*arr[i];
    }
    return product;
}

int main()
{
    int arr[]={1,2,3,4,5};
    int size=5;
    cout<<sumArray(arr,size)<<" is sum of array"<<endl;
    cout<<productArray(arr,size)<<" is product of array"<<endl;
    return 0;
}