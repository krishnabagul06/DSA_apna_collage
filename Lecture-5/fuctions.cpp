#include<iostream>
using namespace std;

//function to add two numbers 
int sum(int a, int b){       // int a and int b is the parameters
    int s=a+b;
    return s;
}

// function for the minimum of two numbers
int minoftwo(int a,int b){
    if(a<b)
    {
        return a;
    }
    else{
        return b;
    }
}

//main
int main()
{
    cout<<sum(4,5)<<endl;          // 4 and 5 are the arguments 
    cout<<"minimum of two number is "<<minoftwo(4,6)<<endl;

    return 0;
}