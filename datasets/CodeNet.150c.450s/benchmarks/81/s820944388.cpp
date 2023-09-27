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
#define rep(i,n) for(i=0;i<n;i++)
#define loop(i,a,n) for(i=a;i<n;i++)
#define all(in) in.begin(),in.end()
#define shosu(x) fixed<<setprecision(x)

typedef vector<int> vi;
typedef pair<int,int> pii;

int main(void) {
  int i,j,k;
  int n;
  while(1){
    cin>>n;
    if(n==0)break;
    vector<vi> v(100,vi(100));
    rep(i,100)rep(j,100)
      if(i==j)v[i][j]=0;
      else v[i][j]=INF;
    rep(i,n){
      int a,b,c;
      cin>>a>>b>>c;
      v[a][b]=c;
      v[b][a]=c;
    }
    rep(k,100)rep(i,100)rep(j,100)
      v[i][j]=min(v[i][j],v[i][k]+v[k][j]);
    int ans=INF;
    int num;
    rep(i,100)
      if(v[i][0]==INF)break;
    n=i;
    rep(i,n){
      int sum=0;
      rep(j,n)
        sum+=v[i][j];
      if(ans>sum){
        ans=sum;
        num=i;
      }
    }
    cout<<num<<" "<<ans<<endl;
  }
}