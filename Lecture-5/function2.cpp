// claculate the sum of the numbers from 1 to n 

#include<iostream>
using namespace std;

int sumN(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    return sum;
}

//main
int main()
{
    int n;
    cout<<"Enter the number";
    cin>>n;
    cout<<sumN(n)<<endl;
    return 0;
}