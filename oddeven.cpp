#include<iostream>
using namespace std;
int main()
{
    int next[5],number;
    cin>>number;
    for(int index=0;index<=number;index++)
    {
    cin>>next[index];
    if(next[index]%2==0)
    {
        cout<<"even";
    }
    else
    {
        cout<<"odd";
    }
    }
}
