#include<bits/stdc++.h>
#define MAX 400
#define inf 1<<29
#define linf 1e18
#define eps (1e-8)
#define mod 1000000007
#define pi M_PI
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
typedef pair<double,int> pdi;
typedef vector<int> vi;
typedef vector<pii> vpi;
const int dx[8]={1,0,-1,0,1,1,-1,-1};
const int dy[8]={0,1,0,-1,1,-1,1,-1};

int main()
{
  int m,a,b;
  int p[MAX];
 
  while(1){
    cin>>m>>a>>b;
    if(m+a+b==0)break;
    FOR(i,0,m)cin>>p[i];
    sort(p,p+m);
    reverse(p,p+m);
 
    int ans=0,tmp=0;
    FOR(i,a,b+1){
      if(tmp<=p[i-1]-p[i]){
        ans=i;
        tmp=p[i-1]-p[i];
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}