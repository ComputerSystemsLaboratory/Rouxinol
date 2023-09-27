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

int n,v[100+1][100+1]={},d[1000]={},color[1000]={};
int q[1000]={},head=0,tail=0;
void bfs(int s){
  rep(i,n){
    if(v[s][i]==0&&s!=i){
      color[s]=0;
      d[i]=INT_MAX;
    }
  }
  color[s]=1;
  d[s]=0;
  head=tail=0;
  q[tail++]=s;
  while(head!=tail){
    int u=q[head++];
    rep(i,n){
      if(v[u][i]==0)continue;
      if(color[i]==0){
	color[i]=1;
	d[i]=d[u]+1;
	q[tail++]=i;
      }
    }
    color[u]=2;
  }
}
int main(){
  cin>>n;
  int u,k,in;
  rep(i,n){
    cin>>u>>k;
    rep(j,k){
      cin>>in;
      v[u-1][in-1]=1;
    }
  }
  //rep(i,n)
  bfs(0);
  rep(i,n){
    cout<<i+1<<" ";
    if(d[i]==INT_MAX)cout<<-1;
    else cout<<d[i];
    cout<<endl;
  }
  return 0;
}

