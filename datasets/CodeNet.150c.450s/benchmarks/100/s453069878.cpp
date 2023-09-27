#include<iostream>
using namespace std;
int main()
{
    long int i,s=1,n;
    cin>>n;
    for(i=n;i>0;i--) s=s*i;
    cout<<s<<endl;


    return 0;
}