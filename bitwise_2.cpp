#include<iostream>
#include<bitset>
using namespace std;

int main()
{
    int n,k;
    cout<<"Enter the Number : ";
    cin>>n;
    cout<<"enter the bit : ";
    cin>>k;
   /* if((n>>k)&1)
    {
        cout<<"kth bit is set "<<endl;
    }
    else{
        cout<<"kth bit is not set "<<endl;
    }*/
    if((1<<k)&n)
    {
        cout<<"True"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    return 0;
}
