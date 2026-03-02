// n=4

// 1 1 1 1
//   2 2 2
//     3 3
//       4 

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=0;i<n;i++)   //rows
    {
        for(int j=0;j<i;j++)   //for spaces
        {
            cout<<" ";
        }
        for(int j=0;j<n-i;j++)    //for numbers 
        {
            cout<<i+1;
        }
        cout<<endl;
    }
    return 0;
}

