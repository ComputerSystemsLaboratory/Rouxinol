#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int a,b;
    cin>>a>>b;
    long long int ar[a+5];
    for(int k=0;k<a;k++)
    {
        cin>>ar[k];
    }
    for(int i=b;i<a;i++)
    {
        if(ar[i]>ar[i-b]) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
