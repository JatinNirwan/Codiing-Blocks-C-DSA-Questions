#include<bits/stdc++.h>
using namespace std;

void inverse_array(int *a,int n)
{
    int arr[n];
    for(int i=0;i<n;i++)
    {
        arr[a[i]]=i;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    inverse_array(a,n);
}
