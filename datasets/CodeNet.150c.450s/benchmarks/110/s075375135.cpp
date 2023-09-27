#include<bits/stdc++.h>
using namespace std;
using Int = long long;

template<typename T>
vector<T> make_v(size_t a){return vector<T>(a);}
template<typename T>
vector<vector<T> > make_v(size_t a,size_t b){
  return vector<vector<T> >(a,make_v<T>(b));
}
template<typename T>
vector<vector<vector<T> > > make_v(size_t a,size_t b,size_t c){
  return vector<vector<vector<T> > > (a,make_v<T>(b,c));
}

template<typename T,typename V>
typename enable_if<is_class<T>::value==0>::type
fill_v(T &t,const V &v){t=v;}

template<typename T,typename V>
typename enable_if<is_class<T>::value!=0>::type
fill_v(T &t,const V &v){
  for(auto &e:t) fill_v(e,v);
}

//INSERT ABOVE HERE
signed main(){
  Int h,w,n;
  cin>>h>>w>>n;
  vector<string> s(h);
  for(Int i=0;i<h;i++) cin>>s[i];

  auto dp=make_v<Int>(n+1,h,w);
  fill_v(dp,-1);
  
  Int y,x,d=0;
  for(Int i=0;i<h;i++)
    for(Int j=0;j<w;j++)
      if(s[i][j]=='S')
	y=i,x=j;

  using T = tuple<Int, Int, Int>;
  queue<T> q;
  dp[d][y][x]=0;
  q.emplace(d,y,x);

  auto in=[&](Int y,Int x){return 0<=y&&y<h&&0<=x&&x<w;};
  Int dy[]={0,0,1,-1};
  Int dx[]={1,-1,0,0};
  while(!q.empty()){
    tie(d,y,x)=q.front();q.pop();
    for(Int k=0;k<4;k++){
      Int ny=y+dy[k],nx=x+dx[k],nd=d;
      if(!in(ny,nx)||s[ny][nx]=='X') continue;
      if(s[ny][nx]=='0'+(d+1)) nd++;
      if(~dp[nd][ny][nx]) continue;
      dp[nd][ny][nx]=dp[d][y][x]+1;
      q.emplace(nd,ny,nx);
    }
  }
  
  for(Int i=0;i<h;i++)
    for(Int j=0;j<w;j++)
      if(s[i][j]=='0'+n)
	cout<<dp[n][i][j]<<endl;
  
  return 0;
}

