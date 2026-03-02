// n=4

// A
// B A
// C B A
// D C B A

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char ch='A';
    for(int i=0;i<n;i++)
    {
        char  temp=ch;
        for(int j=i+1;j>0;j--)
        {
            cout<<temp;
            temp--;
        }
        ch++;
        cout<<endl;
    }
    return 0;
}