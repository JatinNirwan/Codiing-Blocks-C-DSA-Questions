#include <iostream>
using namespace std;
int main()
{
    int no;
    //Accept and print until you get multiple of 7 and skip all the numbers which are multiple of 13
    while(true)
    {
        cin>>no;
        if(no%13==0)
        {
            continue;
        }
        if(no%7==0)
        {
            break;
        }
           cout<<"No "<<no<<endl;
    }
    cout<<"Came out of the loop! ";
}
