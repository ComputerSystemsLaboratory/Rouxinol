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
  int h,w;
  while(1){
    cin>>w>>h;
    if(w+h==0)break;
    cin.ignore();
    vector<string> s(h);
    rep(i,h)cin>>s[i];
    queue<pii> q;
    vector<vi> used(h,vi(w,0));
    rep(i,h)rep(j,w)if(s[i][j]=='@'){
      q.push(pii(i,j));
      used[i][j]++;
    }
    int d[5]={0,1,0,-1,0};
    while(q.size()){
      rep(i,4){
	int x=q.front().first+d[i];
	int y=q.front().second+d[i+1];
	if(x>=0 && x<h && y>=0 && y<w && 
	   s[x][y]=='.' && used[x][y]==0){
	     used[x][y]++;
	     q.push(pii(x,y));
	}
      }
      q.pop();
    }
    int ans=0;
    rep(i,h)rep(j,w)if(used[i][j])ans++;
    cout<<ans<<endl;
  }
}