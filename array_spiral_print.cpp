#include<iostream>
using namespace std;

int main() {
	int m ;
	int n ;
    cin>>m>>n;
    int mat[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>mat[i][j];
        }
    }
	int sr = 0;
	int sc = 0;
	int er = m-1;
	int ec = n-1;

	while(sr <= er && sc <= ec) {
		// 1. print the sr by iterating over columns from sc to ec
		for(int j=sc; j<=ec; j++) {
			cout << mat[sr][j] << ", ";
		}
		sr++;
		// 2. print the ec by it. over rows from sr to er
		for(int i=sr; i<=er; i++) {
			cout << mat[i][ec] << ", ";
		}
		ec--;
		// 3. print the er by it. over columns from ec to sc
		if(sr <= er) {
			for(int j=ec; j>=sc; j--) {
				cout << mat[er][j] << ", ";
			}

			er--;
		}
		// 4. print the sc by it. over rows from er to sr
		if(sc <= ec) {
			for(int i=er; i>=sr; i--) {
				cout << mat[i][sc] << ", ";
			}
			sc++;
		}
	}
    cout<<"END"<<endl;
	return 0;
}
