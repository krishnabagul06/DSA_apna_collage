#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>vec;
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);

    cout<<"After push back size is ="<<vec.size()<<endl;
    vec.pop_back();
    cout<<vec.capacity();

    // for(int val : vec)
    // {
    //     cout<<val<<endl;
    // }
    // return 0;

    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<endl;
    }
    return 0;

}