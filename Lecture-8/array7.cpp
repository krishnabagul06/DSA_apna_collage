// WAP to find out the largest and smallest element from the array and print its index value 

#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int largest=INT_MIN;
    int smallest=INT_MAX;
    int largest_index=-1;
    int smallest_index=-1;
    int size=5;
    int arr[size];

    for(int i=0;i<=size-1;i++)
    {
        cin>>arr[i];
    }

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
    cout<<"largest number index is:"<<largest_index<<endl;
    cout<<"smallest number index is:"<<smallest_index<<endl;
    return 0;
}