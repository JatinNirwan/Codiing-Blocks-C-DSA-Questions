#include <iostream>
using namespace std;
int main() {
    int N;
    cin>>N;
    int A[N];
    for(int i=0;i<N;i++){
        cin>>A[i];
    }
    int M;
    cin>>M;
    int B[M];
    for(int i=0;i<M;i++){
        cin>>B[i];
    }
    int i=N-1;
    int j=M-1;
    int sum=0;
    int C[N+M];
    int k=0;
    while(i>=0 and j>=0){
        sum+=(A[i]+B[j]);
        C[k]=sum%10;
        sum=sum/10;
        k++;
        i--;
        j--;
    }
    while(i>=0){
        sum+=A[i];
        C[k]=sum%10;
        sum=sum/10;
        k++;
        i--;
    }
    while(j>=0){
        sum+=B[j];
        C[k]=sum%10;
        sum=sum/10;
        k++;
        j--;
    }
    if(sum!=0){
     cout<<sum<<", ";
    }
    for(int i=k-1;i>=0;i--){
        cout<<C[i]<<", ";
    }
   // cout<<sum<<", ";
    cout<<"END";
    return 0;
}
