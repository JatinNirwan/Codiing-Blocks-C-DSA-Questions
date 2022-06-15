#include <iostream>
using namespace std;
void selection_sort(int a[],int n)
{
    for(int i=0; i<n-1; i++) {
		// in the ith phase we place the smallest element in the unsorted part
		// of the array to its correct position which index i
		int min_idx = i;
		for(int j=i+1; j<n; j++) {
			if(a[j] < a[min_idx]) {
				min_idx = j;
			}
		}
		swap(a[i], a[min_idx]);
	}
}
int main()
{
    int n;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    selection_sort(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }

}
