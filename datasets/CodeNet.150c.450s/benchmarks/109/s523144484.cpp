#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cmath>
#include<math.h>
#include<string>
#include<string.h>
#include<stack>
#include<queue>
#include<vector>
#include<utility>
#include<set>
#include<map>
#include<stdlib.h>
#include<iomanip>

using namespace std;

#define ll long long
#define ld long double
#define EPS 0.0000000001
#define INF 1e9
#define MOD 1000000007
#define rep(i,n) for(i=0;i<n;i++)
#define loop(i,a,n) for(i=a;i<n;i++)
#define all(in) in.begin(),in.end()
#define shosu(x) fixed<<setprecision(x)

typedef vector<int> vi;
typedef pair<int,int> pii;

int main(void) {
  int i,j;
  int n;
  while(1){
    cin>>n;
    if(n==0)break;
    vi v(100005,0);
    rep(i,n){
      int a,b,c;
      scanf("%d:%d:%d",&a,&b,&c);
      v[a*3600+b*60+c]++;
      scanf("%d:%d:%d",&a,&b,&c);
      v[a*3600+b*60+c]--;
    }
    rep(i,100000)v[i+1]+=v[i];
    int ans=0;
    rep(i,100000)ans=max(ans,v[i]);
    cout<<ans<<endl;
  }
}