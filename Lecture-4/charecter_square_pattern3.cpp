// n=5

// A B C D E
// A B C D E
// A B C D E
// A B C D E
// A B C D E

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)        // outer loop 
    {
        char ch='A';
        for(int j=1;j<=n;j++)     // inner loop 
        {
            cout<<ch<<" ";
            ch=ch+1;
        }
        cout<<endl;
    }
    return 0;
}