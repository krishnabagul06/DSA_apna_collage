// n=4

// AAAA
//  BBB
//   CC
//    D

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char ch='A';

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++) //for space
        {
            cout<<" ";
        }
        for(int j=0;j<n-i;j++)
        {
            cout<<ch;
        }
        ch++;
        cout<<endl;
    }
    return 0;
}