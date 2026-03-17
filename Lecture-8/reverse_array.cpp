// Reverse array 

#include<iostream>
using namespace std;

int revArray(int arr[], int size)
{
    int start=0;
    int end=size-1;

    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int arr[]={1,2,3,4,5};
    int size=5;

    revArray(arr,size);
    for(int i=0;i<=size-1;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}