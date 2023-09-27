#include<bits/stdc++.h>
#define MAX 200010
#define inf 2147483647
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

int n,n_,q;
ll st[MAX*2];

void init(){
  n_ = 1;
  while(n_<n)n_*=2;
  FOR(i,0,2*n_-1)st[i]=0;
}

void add(int a,int b){
  a+=n_-1;
  st[a] += b;
  while(a>0){
    a = (a-1)/2;
    st[a] = st[a*2+1]+st[a*2+2];
  }
}

int find(int a,int b,int c,int l,int r){
  if(r<=a || b<=l)return 0;
  if(a<=l && r<=b)return st[c];
  
  int L = find(a,b,c*2+1,l,(l+r)/2);
  int R = find(a,b,c*2+2,(l+r)/2,r);
  return L+R;
}

int main()
{
  cin>>n>>q;
  init();
  FOR(i,0,q){
    int a,b,c;
    cin>>a>>b>>c;
    if(a)cout<<find(b-1,c,0,0,n_)<<endl;
    else add(b-1,c);
  }
  return 0;
}

