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

#define coutALL(i,a) {int i=0;for(auto e:a) cout<<(i++?" ":"")<<e.se; cout<<endl;}
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

//typedef pair<int,int> P;
typedef long long LL;

typedef pair<int,int> P;

int partition(vector <P> &a,int p,int r){

  int x=a[r].fi;
  int i=p-1;

  REAP(j,p,r){

    if(a[j].fi<=x){

      i++;
      swap(a[i],a[j]);

    }

  }

  swap(a[i+1],a[r]);

  return i+1;

}

void quicksort(vector <P> &a,int p,int r){

  if(p<r){

    int q=partition(a,p,r);
    quicksort(a,p,q-1);
    quicksort(a,q+1,r);

  }

}

signed main(){

  ios::sync_with_stdio(false);

  int n;
  cin>>n;

  vector <P> a(n),b;
  vector <char> c(n);
  vector <int> num(n);

  REP(i,n){

    cin>>c[i]>>num[i];

    a[i]=mp(num[i],i);

  }

  b=a;
  quicksort(a,0,n-1);
  stable_sort(ALL(b));

  cout<<(a!=b?"Not stable":"Stable")<<endl;

  for(P e:a) cout<<c[e.se]<<" "<<e.fi<<endl;

  return 0;

}
