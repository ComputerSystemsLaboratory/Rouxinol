#include<bits/stdc++.h>
#define MAX 100010
#define inf 1<<30
#define linf 1e16
#define eps (1e-8)
#define mod 1000000007
#define pi acos(-1)
#define phi (1.0+sqrt(5))/2.0
#define f first
#define s second
#define mp make_pair
#define pb push_back
#define all(a) (a).begin(),(a).end()
#define pd(a) printf("%.10f\n",(double)(a))
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define RFOR(i,a,b) for(int i=(a)-1;(b)<=i;i--)
#define equals(a,b) (fabs((a)-(b))<eps)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef pair<int,double> pid;
typedef pair<double,int> pdi;
typedef vector<int> vi;
typedef vector<pii> vpi;
const int dx[8]={1,0,-1,0,1,1,-1,-1};
const int dy[8]={0,1,0,-1,1,-1,1,-1};

int v,e,r;
vector<pii> g[MAX];

void dijkstra(){
  int d[MAX];
  priority_queue<pii,vector<pii>,greater<pii> > pq;
  fill(d,d+MAX,inf);
  d[r]=0;
  pq.push(mp(0,r));

  while(pq.size()){
    pii u=pq.top();
    pq.pop();
    if(d[u.s]<u.f)continue;

    FOR(i,0,g[u.s].size()){
      int next=g[u.s][i].f;
      int cost=d[u.s]+g[u.s][i].s;
      if(cost<d[next]){
        d[next]=cost;
        pq.push(mp(cost,next));
      }
    }
  }
  FOR(i,0,v){
    if(d[i]==inf)printf("INF\n");
    else printf("%d\n",d[i]);
  }
  return;
}

int main()
{
  scanf("%d%d%d",&v,&e,&r);
  FOR(i,0,e){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    g[a].pb(mp(b,c));
  }
  dijkstra();
  return 0;
}