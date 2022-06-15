#include<iostream>
using namespace std;
int getmaxlength(int *arr,int n)
{
	int cnt;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==0)
		{
			cnt = 0;
		}
		else
		{
			cnt++;
			result=max(cnt,result);
		}
	}
	return result;
}
int main () {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<getmaxlength(a,n)<<endl;
	return 0;
}
