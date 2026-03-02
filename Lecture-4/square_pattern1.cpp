// n=5

// * * * * * 
// * * * * *
// * * * * *
// * * * * *
// * * * * *

#include<iostream>
using namespace std;

int main()
{
    int n=5;                    // number of rows 
    for(int i=1;i<=n;i++)       //for rows
    {
        int m=5;                // number of colums 
        for(int j=1;j<=m;j++)   // for coloums 
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}