#include<iostream>
#include<bitset>
#include<cmath>
using namespace std;
//count no of set bits in a number
int main()
{
    int n,cnt=0,k;
    cout<<"Enter the Number : ";
    cin>>n;
    k=ceil(log2(n+1));//optimization or can run up to 32
    for(int i=0;i<k;i++)
    {
        if((n>>i)&1)
        {
            cnt++;
        }
    }
    cout<<"No of set bits is "<<cnt<<endl;
    return 0;
}

