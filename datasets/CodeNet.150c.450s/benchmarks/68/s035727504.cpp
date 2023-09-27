#include<bits/stdc++.h>
#define MAX 1024
#define inf 1<<29
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

int n;
int a[MAX];

int main()
{
  while(cin>>n && n){
    FOR(i,0,n)cin>>a[i];
    sort(a,a+n);
    int ans=inf;
    FOR(i,1,n)ans=min(ans,a[i]-a[i-1]);
    cout<<ans<<endl;
  }
  return 0;
}