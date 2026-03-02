// n=4

//    *
//   * *
//  *   *
// *     *
//  *   *
//   * *
//    *  

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=0;i<n;i++)   //top
    {
        for(int j=0;j<n-i-1;j++)  //spaces
        {
            cout<<" ";
        }
        cout<<"*";
        if(i!=0)
        {
            //spaces
            for(int j=0;j<2*i-1;j++)
            {
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
        
    }
    return 0;
}