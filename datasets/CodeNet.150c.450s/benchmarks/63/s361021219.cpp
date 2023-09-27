#include<bits/stdc++.h>
#define int long long
#define INF INT_MAX
#define P pair<int,int>
using namespace std;

int d[100000];
vector<P>f[500000]{};
signed main(){
int a,b,c;
cin>>a>>b>>c;
fill(d,d+a+1,INF);
d[c]=0;
priority_queue<P,vector<P>,greater<P>>Q;
Q.push(P(0,c));
for(int h=0;h<b;h++){
int i,j,k;
scanf("%lld%lld%lld",&i,&j,&k);
f[i].push_back(P(k,j));
}
while(Q.empty()==false){
P o=Q.top();
Q.pop();
int u=o.second;
if(d[u]<o.first)continue;
for(int x=0;x<f[u].size();x++){
P l=f[u][x];
if(d[l.second]>d[u]+l.first){
d[l.second]=d[u]+l.first;
Q.push(P(d[l.second],l.second));
}
}
}
for(int y=0;y<a;y++){
if(d[y]!=INF) printf("%lld\n",d[y]);
else printf("INF\n");
}
}