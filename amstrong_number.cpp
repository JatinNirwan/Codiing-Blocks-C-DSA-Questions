#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int N,result;
	int temp,r,n=0;
	cin>>N;
	temp=N;
	while(temp!=0)
	{
		n++;
		temp/=10;
	}
	temp=N;
	result=0;
	while(temp!=0)
	{
		r=temp%10;
		result+=pow(r,n);
		temp/=10;

	}
    if(result==N)
	{
		cout<<"true"<<endl;
	}
	else{
		cout<<"false"<<endl;
	}
	return 0;

}
