#include<iostream>
using namespace std;
int main() {
	int m,n;
	cin>>m>>n;
	int a[m][n];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	int target;
	cin>>target;
	int i;
	bool flag=false;
	for(i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i][j]==target)
			{
				cout<<1<<endl;
				flag=true;
				break;
			}
		}
	}
	if(flag==false)
	{
		cout<<0<<endl;
	}
	return 0;
}
