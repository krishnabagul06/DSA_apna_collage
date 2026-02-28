// Write a program for find out the sum of numbers from 1 to n
#include<iostream>
using namespace std;

int main()
{
    int n;
    int sum=0;
    cout<<"Enter the range of the number :";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<sum<<endl;

    // using while loop 
    int j=1;
    int s=0;
    while(j<=n)
    {
        s=s+j;
        j++;
    }
    cout<<s<<endl;

    return 0;
}