// WAP to find the largest and smallest number from the array 

#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int smallest=INT_MAX;
    int largest=INT_MIN;
    int size=5;
    int arr[size];
    
    for(int i=0;i<=size-1;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<=size-1;i++)
    {
        smallest=min(arr[i],smallest);
        largest=max(arr[i],largest);
    }
    cout<<"largest :"<<largest<<endl;
    cout<<"smallest :"<<smallest<<endl;
    return 0;
}