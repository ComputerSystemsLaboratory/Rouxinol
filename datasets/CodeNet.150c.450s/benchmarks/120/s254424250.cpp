#include <bits/stdc++.h>

#define loop(i,a,b) for(int i=(a); i<int(b); i++)
#define rep(i,b) loop(i,0,b)

using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
int bcnt[4096];

inline int c(int n, int w){
  int res=0;
  for(int i=0; n && i<w; i++){
    if(n&1) res++;
    n>>=1;
  }
  return res;
}

int solve(vi const& v, int const h, int const w){
  int ans=0;
  rep(mask,1<<w){
    int t=0;
    rep(i,h){
      int m=v[i]^mask;
      //int x=c(m,w);
      int x=bcnt[m];
      x=max(w-x,x);
      t+=x;
    }
    ans=max(ans,t);
  }
  return ans;
}

int main(){
  int h,w;
  for(int i=0; i<(1<<12); i++){
    int x=c(i,20);
    bcnt[i]=x;
    //printf("cnt[%d]=%d;\n",i,x);
  }

  //exit(0);
  
  while(cin>>h>>w && h+w){
    vvi v(h,vi(w));
    vi o(w);
    rep(i,h)rep(j,w) cin>>v[i][j];
    rep(i,w){
      int t=0;
      rep(j,h){
	t<<=1;
	t|=v[j][i];
      }
      o[i]=t;
    }
    cout << solve(o,w,h) << endl;
  }
}