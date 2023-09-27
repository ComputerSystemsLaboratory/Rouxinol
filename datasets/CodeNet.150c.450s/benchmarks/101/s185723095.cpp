#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n)   for(int i=0;i<(n);++i)
#define SORT(c)    sort((c).begin(),(c).end())
#define CLR(a)     memset((&a), 0 ,sizeof(a))//clear memory
#define dump(x)    cerr << #x << " = " << (x) << endl;//debug
#define debug(x)   cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;
#define EPS        1e-10//sample:if((double)>=(double)+EPS)
//cin,cout release
//std::cin.tie(0);
//ios::sync_with_stdio(false);

using namespace std;

vector<int> G[200001];
int color[200001];
int s[1000000],head,tail;
void dfs(int r,int c){
  head=tail=0;
  s[tail++]=r;
  color[r]=c;
  while(head!=tail){
    int u=s[head++];
    for(int i=0;i<(int)G[u].size();i++){
      int v=G[u][i];
      if(color[v]==-1){
	s[tail++]=v;
	color[v]=c;
      }
    }
  }
}
int main(){
  int n,m,ia,ib,p,id=1;
  rep(i,200000)color[i]=-1;
  cin>>n>>p;
  rep(i,p){
    cin>>ia>>ib;
    G[ia].push_back(ib);
    G[ib].push_back(ia);
  }
  rep(i,n)if(color[i]==-1)dfs(i,id++);
  cin>>m;
  rep(i,m){
    cin>>ia>>ib;
    if(color[ia]==color[ib])cout<<"yes"<<endl;
    else cout<<"no"<<endl;
  }

  return 0;
}

