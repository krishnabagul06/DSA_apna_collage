#include<iostream>
using namespace std;

int main()
{
    int marks[5]={20,49,34,32,35};
    cout<<marks[1]<<endl;
    marks[1]=100;
    cout<<marks[1]<<endl;

    // to find the size of the array 
    // sizeof(marks) it show the 20 because int take the 4 bytes and we have 5 indexes so 4*5=20
    cout<<sizeof(marks)/sizeof(int)<<endl;
}