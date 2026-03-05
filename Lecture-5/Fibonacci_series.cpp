// Write a function to print nth fibonacci 

#include<iostream>
using namespace std;

int fibonacci(int n)
{
    int a=0,b=1,c;
    for(int i=1;i<=n;i++)
    {
        cout<<a<<" ";
        c=a+b;
        a=b;
        b=c;
    }
}

int main()
{
    int n;
    cin>>n;

    fibonacci(n);
    return 0;
}