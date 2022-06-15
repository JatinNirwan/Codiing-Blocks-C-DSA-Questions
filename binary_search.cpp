#include<iostream>
using namespace std;
int first_occurance(int a[],int n,int key)
{
    int s=0;
    int e=n-1;
    int ans=-1;
    //update in a direction that ans values gets lower and lower
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(a[mid]==key)
        {
            //Do two things
            ans=mid;
            e=mid-1;//Do not stop but explore the left part of the array
        }
        else if(a[mid]>key)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
return ans;
}
int last_occurance(int a[],int n,int key)
{
    int s=0;
    int e=n-1;
    int ans=-1;
    //update in a direction that ans values gets lower and lower
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(a[mid]==key)
        {
            //Do two things
            ans=mid;
            s=mid+1;//Do not stop but explore the right part of the array
        }
        else if(a[mid]>key)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
return ans;
}
int main()
{
    int a[]={1,2,5,8,8,8,8,8,10,12,15,20};
    int n=sizeof(a)/sizeof(int);
    int key;
    cin>>key;
    cout<<first_occurance(a,n,key)<<endl;
    cout<<last_occurance(a,n,key)<<endl;
}
