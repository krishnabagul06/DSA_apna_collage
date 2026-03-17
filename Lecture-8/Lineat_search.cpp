// Linear search 

#include<iostream>
using namespace std;

int LinearSearch(int arr[],int size, int target)
{
    for(int i=0;i<=size-1;i++)
    {
        if(arr[i]==target)
        {
            return 1;
        }
    }
    return -1;
}

int main()
{
    int arr[]={2,3,4,6,7,8};
    int size=6;
    int target=6;
    cout<<LinearSearch(arr,size,target)<<endl;
    return 0;

}