// n=4

// A B C D 
// E F G H 
// I J K L
// M N O P

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char ch='A';
    for(int i=0;i<n;i++)        // outer loop 
    {
        for(int j=0;j<n;j++)     // inner loop 
        {
            cout<<ch<<" ";
            ch=ch+1;
        }
        cout<<endl;
    }
    return 0;
}