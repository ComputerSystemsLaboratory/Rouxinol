#include<bits/stdc++.h>
using namespace std;
#define int long long
typedef pair<string,int> P;
signed main(){
  int n,q;
  cin>>n>>q;
  string name[n];
  int time[n];
  for(int i=0;i<n;i++) cin>>name[i]>>time[i];
  int cur=0;
  queue<P> que;
  for(int i=0;i<n;i++) que.push(P(name[i],time[i]));
  while(!que.empty()){
    P p=que.front();que.pop();
    if(p.second<=q){
      cur+=p.second;
      cout<<p.first<<" "<<cur<<endl;
      continue;
    }
    p.second-=q;
    cur+=q;
    que.push(p);
  }
  return 0;
}