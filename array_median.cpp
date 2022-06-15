#include<iostream>
#include<algorithm>
using namespace std;
void median(int *arr1,int *arr2,int n)
{
	int arr[n+n];
	int k=0;
	int median=0,m1=0,m2=0,n1=0,n2=0;
	for(int i=0;i<n;i++)
	{
		arr[k]=arr1[i];
		k++;
	}
	for(int i=0;i<n;i++)
	{
		arr[i]=arr2[i];
		k++;
	}
	sort(arr,arr+k);
	if(k%2==0)
	{
		n1=k/2;
		n2=k/2+1;
		m1=arr[n1];
		m2=arr[n2];
		median=(m1+m2)/2;
	}
	else
	{
		n1=k/2;
		median=arr[n1];
	}
	cout<<median;
}
int main() {
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
	median(arr1,arr2,n);
	return 0;
}
