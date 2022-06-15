#include <iostream>
using namespace std;

void printABCDPattern(int n)
{
    for(int i=1;i<=n;i++)
    {
     int cnt_alphabets=n-i+1;
     char alphabets='A';
     for(int j=1;j<=cnt_alphabets;j++)
     {
         cout<<alphabets;
         alphabets=alphabets+1;
     }
     cout<<endl;
    }
}

int main()
{
   int n;
   cin>>n;
   printABCDPattern(n);

}
