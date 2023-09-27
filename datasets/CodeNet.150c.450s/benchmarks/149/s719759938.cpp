#include <bits/stdc++.h>
using namespace std;

int n,q;
int p[10005];

int find(int x) {
    return p[x]<0?x:p[x]=find(p[x]);
}

void uni(int x,int y) {
    if ((x=find(x))==(y=find(y))) return;
    if (p[y]<p[x]) swap(x,y);
    if (p[x]==p[y]) --p[x];
    p[y]=x;
}

int main() {
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    cin>>n>>q;
    memset(p,-1,sizeof p);
    while (q--) {
        int f,x,y; cin>>f>>x>>y;
        if (f==0) uni(x,y);
        else cout<<(find(x)==find(y))<<'\n';
    }
}
