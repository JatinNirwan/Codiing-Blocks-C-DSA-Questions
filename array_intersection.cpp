#include<iostream>
#include<algorithm>
using namespace std;

void intersection(int *arr1,int *arr2,int n)
{
    int i,k,j=0;
    int ans[100000];
    while(i<n && j<n)
    {
        if(arr1[i] < arr2[j])
        {
            i++;
        }
        else if(arr1[i] > arr2[j])
        {
            j++;
        }
        else if(arr1[i]==arr2[j])
        {
            ans[k]=arr1[i];
            i++;
            j++;
            k++;
        }
    }
	sort(ans,ans+k);
    cout<<"[";
    for(int cnt=0;cnt<k;cnt++)
    {
        cout<<ans[cnt];
		if(cnt<k-1)
		{
			cout<<", ";
		}
    }
    cout<<"]";
}
int main()
{
    int n;
    cin>>n;
    int arr1[n];
    int arr2[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>arr2[i];
    }
	sort(arr1,arr1+n);
	sort(arr2,arr2+n);
    intersection(arr1,arr2,n);
    return 0;
}
