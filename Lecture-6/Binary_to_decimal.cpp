// Write a function for the conversition of the binary number to the decimal number 

#include<iostream>
using namespace std;

int BintoDec(int binNum)
{
    int ans=0,pow=1;
    while(binNum>0)
    {
        int rem=binNum%10;
        ans += rem * pow;

        binNum/=10;
        pow *= 2;
    }
    return ans;
}

int main()
{
    int binNum=1100;
    cout<<BintoDec(binNum)<<endl;
    
    return 0;

}