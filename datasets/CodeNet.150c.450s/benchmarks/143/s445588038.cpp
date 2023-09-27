#include<bits/stdc++.h>

using namespace std;
map<int,int>M;
int main()
{
    int n;
    cin>>n;
    int a[n];
    long long int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        M[a[i]]++;
        sum+=a[i];
    }
    int q;
    cin>>q;
    int b[q],c[q];
    for(int i=0;i<q;i++)
    {
        cin>>b[i]>>c[i];
        sum+=(M[b[i]]*(c[i]-b[i]));
        M[c[i]]+=M[b[i]];
        M[b[i]]=0;
        cout<<sum<<endl;
    }

}
