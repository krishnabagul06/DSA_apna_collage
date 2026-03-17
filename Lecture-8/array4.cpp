// WAP to find the smallest element in the array 

#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int size=5;
    int num[size];
    int smallest=INT_MAX;

    for(int i=0;i<=size-1; i++)
    {
        cin>>num[i];
    }

    // loop for to find the smallest number
    for(int i=0;i<=size-1;i++)
    {
        if(num[i]<smallest)
        {
            smallest=num[i];
        }
    }
    cout<<"the smallest element in array is : "<<smallest<<endl;
    return 0;
}