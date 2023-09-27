#include<bits/stdc++.h>
using namespace std;
int n,m,i,s,t,p[1<<17],q;
int root(int u){
  return p[u]==u?u:p[u]=root(p[u]);
}
int main(void){
  for(i=0;i<1<<17;i++)p[i]=i;
  cin>>n>>m;
  while(m--){
    cin>>s>>t;
    s=root(s);
    t=root(t);
    // if(s>t)swap(s,t);
    if(s!=t)p[t]=s;
  }
  cin>>q;
  while(q--){
    cin>>s>>t;
    cout<<(root(s)==root(t)?"yes":"no")<<endl;
  }
  return 0;
}

