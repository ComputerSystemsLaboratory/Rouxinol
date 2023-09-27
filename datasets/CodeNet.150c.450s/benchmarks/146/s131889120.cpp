#include<iostream>
#include<sstream>
#include<algorithm>
#include<numeric>
#include<vector>
#include<map>
#include<set>
#include<queue>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cstring>
#include<cassert>

#define rep(i,n) for(int i=0;i<n;i++)
#define all(c) (c).begin(),(c).end()
#define fr(i,c) for(__typeof((c).begin()) i=(c).begin();i!=(c).end();i++)
#define mp make_pair
#define pb push_back
#define dbg(x) cerr<<#x<<" = "<<(x)<<endl

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

const int inf=1<<28;
const double INF=1e12,EPS=1e-9;

int main()
{
  int n; cin>>n;
  rep(i,n){
    double x1,y1,x2,y2,x3,y3,x4,y4;
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
    x2-=x1,y2-=y1;
    x4-=x3,y4-=y3;

    bool ok=abs(x2*y4-x4*y2)<EPS;
    cout<<(ok?"YES":"NO")<<endl;
  }
  return 0;
}