#include<bits/stdc++.h>
using namespace std;
int num[5000];
int  serch(int line,int now,int maxe)
{
    if(maxe==now)return line;
    line=max(line,serch(line+num[now],now+1,maxe));
    return line;
}
int main()
{
    int n;
    while(cin>>n,n){
        for(int i=0;i<n;i++)cin>>num[i];
        int ans=num[0];
        for(int i=0;i<n;i++)ans=max(serch(num[i],i+1,n),ans);
        cout<<ans<<endl;
    }
}