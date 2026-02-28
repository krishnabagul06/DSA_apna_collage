#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    bool isprime=true;
    for(int i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            cout<<"non prime"<<endl;
            isprime=false;
            break;
        }
    }
    
    if(isprime==true)
    {
        cout<<"prime number.";
    }
    else{
        cout<<"Non prime number";
    }
    return 0;
}