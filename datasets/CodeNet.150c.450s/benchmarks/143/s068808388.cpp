#include<bits/stdc++.h>
#define int long long 
using namespace std;
const int maxn=1e5+5;
int a[maxn];
int vis[maxn];
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){cin>>a[i];vis[a[i]]++;sum+=a[i];}
    int m;
    cin>>m;
    int b,c;
    for(int i=1;i<=m;i++){
       cin>>b>>c;
       sum+=(vis[b]*c-vis[b]*b);
       vis[c]+=vis[b];
       vis[b]=0;
       cout<<sum<<endl;


    }
    return 0;
}