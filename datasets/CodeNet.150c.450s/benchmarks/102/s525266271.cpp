#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,n) for(int i=0;i<(int)(n);i++)

using namespace std;
bool check[22][22];
char c[22][22];
int w,h;

int recursion(pair<int,int> pos){
  if(c[pos.first][pos.second]=='#'){return 0;}
  if(check[pos.first][pos.second]){return 0;}
  check[pos.first][pos.second]=true;
  int count=1;
  if(pos.first>0){
    count+=recursion(make_pair(pos.first-1,pos.second));
  }
  if(pos.second>0){
    count+=recursion(make_pair(pos.first,pos.second-1));
  }
  if(pos.first<w-1){
    count+=recursion(make_pair(pos.first+1,pos.second));
  }
  if(pos.second<h-1){
    count+=recursion(make_pair(pos.first,pos.second+1));
  }
  return count;
}

int main(){ _;
  pair<int,int> pos;
  while(cin>>w>>h,!(w==0&&h==0)){
    REP(y,h)REP(x,w){
      cin>>c[x][y];
      check[x][y]=false;
      if(c[x][y]=='@')
	pos=make_pair(x,y);
    }
    cout<<recursion(pos)<<endl;
  }
}