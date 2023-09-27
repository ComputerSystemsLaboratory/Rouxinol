#include <bits/stdc++.h>

#define fi first
#define se second
#define mp make_pair
#define pb push_back

//#define int long long

#define upper(n,m) (n+m-1)/m
#define rounding(n) (int)((double)n+0.5)

#define REP(i,n) for(int i=0;i<(n);i++)
#define REAP(i,a,n) for(int i=(a);i<(n);i++)
#define ALL(a) a.begin(),a.end()

#define coutALL(i,a) {int i=0;for(int e:a) cout<<(i++?" ":"")<<e; cout<<endl;}
#define coutYN(a) cout<<(a?"Yes":"No")<<endl;
#define coutyn(a) cout<<(a?"yes":"no")<<endl;

#define deb cout<<"debug"<<endl
#define debn(n) cout<<"debug: "<<n<<endl

const int INF=INT_MAX;
const int MOD=(int)1e9+7;
const double EPS=1e-12;
//const int dx[]={0,1,0,-1},dy[]={-1,0,1,0};
const int dx[]={-1,-1,-1,0,1,1,1,0},dy[]={-1,0,1,1,1,0,-1,-1};

using namespace std;

typedef pair<int,int> P;
typedef long long LL;

signed main(){

  ios::sync_with_stdio(false);

  int n;
  cin>>n;

  vector <int> a(n);
  REP(i,n) cin>>a[i];

  int x=a[n-1];
  int i=-1;

  REP(j,n-1){

    if(a[j]<=x){

      i++;
      swap(a[i],a[j]);

    }

  }

  swap(a[i+1],a[n-1]);

  int j=0;
  for(int e:a){

    if(j++) cout<<" ";
    if(j==i+2) cout<<"["<<e<<"]";
    else cout<<e;

  }

  cout<<endl;

  return 0;

}
