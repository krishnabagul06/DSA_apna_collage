// WAF to swap the max and min number of an array 

#include<iostream>
# include<climits>
using namespace std;

int smallest=INT_MAX;
int largest=INT_MIN;
int smallest_index=-1;
int largest_index=-1;

void minMax(int arr[],int size)
{
    for(int i=0;i<=size-1;i++)
    {
        if(arr[i]<smallest)
        {
            smallest=arr[i];
            smallest_index=i;
        }
        if(arr[i]>largest)
        {
            largest=arr[i];
            largest_index=i;
        }
    }
    swap(arr[smallest_index],arr[largest_index]);
}  

int main()
{
    int arr[]={1,2,3,4,5};
    int size=5;
    minMax(arr,size);
    for(int i=0;i<=size-1;i++)
    {
        cout<<arr[i]<<" "; 
    }
    return 0;
}