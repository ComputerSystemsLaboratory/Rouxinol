#include  <bits/stdc++.h>
using namespace std;
map<long long ,int > d;
int main()
{
    int n,m;
    cin>>n;
    int x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        d[x]=1;
    }
    cin>>n;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(d[x]) sum++;
    }
    cout<<sum<<endl;

}