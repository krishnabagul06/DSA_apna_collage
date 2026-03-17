// take a values from the user in the array 

#include<iostream>
using namespace std;

int main()
{
    int size=5;
    int marks[size];

    for(int i=0 ; i<=size-1 ; i++)
    {
        cin>>marks[i];
    }

    cout<<"now the array elements is :";
    // now loop to print the array values
    for(int i=0;i<=size-1;i++)
    {
        cout<<marks[i]<<endl;
    }
    return 0;
}