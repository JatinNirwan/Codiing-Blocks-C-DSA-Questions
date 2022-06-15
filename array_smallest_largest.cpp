#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n,key;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    //Algorithm to find smallest and largest number
    int largest=INT_MIN;
    int smallest=INT_MAX;
    for(int i=0;i<n;i++)
    {
        largest=max(largest,a[i]);
        smallest=min(smallest,a[i]);
    }
    cout<<" Largest: "<<largest<<endl;
    cout<<" Smallest "<<smallest<<endl;
return 0;
}
