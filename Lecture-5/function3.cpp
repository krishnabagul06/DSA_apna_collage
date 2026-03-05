// calculate N factorial 

#include<iostream>
using namespace std;

// int main()
// {
//     int n;
//     cin>>n;

//     int fact=1;
//     for(int i=1;i<=n;i++)
//     {
//         fact=fact*i;
//     }
//     cout<<fact;
//     cout<<endl;
//     return 0;
// }

// using functions

int factN(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact*=i;
    }
    return fact;
}

int main()
{
    int n;
    cin>>n;
    cout<<factN(n);
}