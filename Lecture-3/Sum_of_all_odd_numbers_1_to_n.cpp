// Write a program for the sum of all odd numbers from 1 to n

#include<iostream>
using namespace std;

int main()
{
    int n;
    int sum=0;
    cout<<"Enter the range of the number";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            sum=sum+i;
        }
    }
    cout<<"sum of all odd numbers is :"<<sum<<endl;

    return 0;
}