#include<iostream>
using namespace std;
int main()
{
    int a[100000];
    a[1]=1;a[2]=2;
    int n;cin>>n;
    for(int i=3;i<=n;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    cout<<a[n]<<endl;
    return 0;
}