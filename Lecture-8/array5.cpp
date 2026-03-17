// WAP to find the largest number in an array 

#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int size=5;
    int num[]={5,15,22,-7,-12};
    int largest=INT_MIN;
    for(int i=0;i<=size-1;i++)
    {
        // if(num[i]>largest)
        // {
        //     largest=num[i];
        // }
        largest=max(num[i],largest);
    }
    cout<<"largest element is:"<<largest<<endl;
    return 0;
}