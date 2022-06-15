#include<iostream>

using namespace std;

int main() {

	int n,t;
	cin>>n;
	int A[n];
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	cin>>t;
	int s = 0;
	int e = n-1;

	while(s <= e) {
		int m = (s+e)/2;
		if(A[m] == t) {
			cout <<  m << endl;
			break;
		} else if(A[m] > t) {
			e = m-1;
		} else {
			s = m+1;
		}
	}

	if(s > e) {
		cout << -1 << endl;
	}


	return 0;
}
