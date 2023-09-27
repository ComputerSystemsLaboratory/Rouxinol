#include<bits/stdc++.h>
#define REP(i,n) for(int i=0;i<n;i++)
#define LOOP(i,x,n) for(int i=x;i<n;i++)
#define ALL(v) (v).begin(),(v).end()
#define PB push_back
#define MP make_pair
#define FR first
#define SC second
#define int long long
const double eps=1e-10;
using namespace std;
const int MOD=1000000007;
const int INF=9000000009;

signed main(){
  int n;
  cin>>n;
  while(n--){
    double x1,y1,x2,y2,x3,y3,x4,y4;
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
    cout<<(abs((y2-y1)*(x4-x3)-(y4-y3)*(x2-x1))<eps?"YES":"NO")<<endl;
  }
  return 0;
}

