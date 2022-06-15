#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

bool isPossible(int arr[],int n,int m,int mid)
{
 int student_used=1;
 int page_reading=0;
 for(int i=0;i<n;i++)
 {
     if(page_reading+arr[i]>mid)
     {
         student_used++;
         page_reading=arr[i];
         if(student_used>m)
         {
                return false;
         }
     }
    else
    {
      page_reading+=arr[i];
    }
}
return true;
}
int findpages(int arr[],int n,int m)
{
    long long int sum=0;
    if(n<m)
    {
        return -1;
    }
    //count no of pages in the book
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    int s=arr[n-1];
    int e=sum;
    int ans=INT_MAX;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(isPossible(arr,n,m,mid))
        {
            ans=min(ans,mid);
            e=mid-1;
        }
        else{
            // It is not possible to divide x pages
            //increases the no of pages
            s=mid+1;

        }
    }
    return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int n,m;
        cin>>n>>m;
        int arr[1000];
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        cout<<findpages(arr,n,m)<<endl;
        t=t-1;
    }

    return 0;
}
