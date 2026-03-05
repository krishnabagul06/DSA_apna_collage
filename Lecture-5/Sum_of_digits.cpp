// Calvulate sum of digits of a numbers 

#include<iostream>
using namespace std;

int sumN(int num)         // Function for the sum of digits 
{
    int digSum=0;
    while(num>0)
    {
        int lastdig=num%10;
        digSum=digSum+lastdig;
        num=num/10;
    }
    return digSum;
}

//main 
int main()
{
    cout<<"sum= "<<sumN(23)<<endl;

    return 0;
}