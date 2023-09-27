#include<bits/stdc++.h>
#define MAX 100010
#define inf 1000000010
#define linf (1e16)
#define eps (1e-8)
#define Eps (1e-12)
#define mod 1000000007
#define pi acos(-1.0)
#define phi (1.0+sqrt(5.0))/2.0
#define f first
#define s second
#define mp make_pair
#define pb push_back
#define all(a) (a).begin(),(a).end()
#define pd(a) printf("%.10f\n",(double)(a))
#define pld(a) printf("%.10Lf\n",(ld)(a))
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define RFOR(i,a,b) for(int i=(a)-1;(b)<=i;i--)
#define Unique(v) v.erase(unique(all(v)),v.end())
#define equals(a,b) (fabs((a)-(b))<eps)
using namespace std;
typedef long double ld;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef pair<int,double> pid;
typedef pair<double,int> pdi;
typedef pair<double,double> pdd;
typedef vector<int> vi;
typedef vector<pii> vpi;

int n,m,s;
vector<pii> E[MAX];

void compute(){
  int d[MAX];
  fill(d,d+MAX,inf);
  priority_queue<pii,vector<pii>,greater<pii> > pq;
  d[s]=0;
  pq.push(mp(0,s));

  while(pq.size()){
    pii u = pq.top();
    pq.pop();

    if(d[u.s]<u.f)continue;

    FOR(i,0,E[u.s].size()){
      int next = E[u.s][i].f;
      int cost = d[u.s]+E[u.s][i].s;
      if(cost<d[next]){
        d[next] = cost;
        pq.push(mp(cost,next));
      }
    }
  }
  FOR(i,0,n){
    if(d[i]==inf)cout<<"INF"<<endl;
    else cout<<d[i]<<endl;
  }
}

int main()
{
  cin>>n>>m>>s;
  FOR(i,0,m){
    int a,b,c;
    cin>>a>>b>>c;
    E[a].pb(mp(b,c));
  }
  compute();
  return 0;
}

