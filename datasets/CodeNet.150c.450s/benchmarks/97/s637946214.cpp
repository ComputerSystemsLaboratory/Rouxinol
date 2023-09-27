
#include<iostream>
#include<map>
using namespace std;

int main()
{
  int N,n,d,i;
  int dx[4]={-1,0,1,0};
  int dy[4]={0,1,0,-1};
  int x,X,y,Y;
  map< int, pair<int,int> > m;
  while(cin>>N,N){
    m.clear();
    m[0] = make_pair(0,0);
    x=X=y=Y=0;
    for(i=1;i<N;i++){
      cin>>n>>d;
      m[i] = make_pair(m[n].first+dx[d],m[n].second+dy[d]);
      if(m[i].first<x)x=m[i].first;
      if(m[i].first>X)X=m[i].first;
      if(m[i].second<y)y=m[i].second;
      if(m[i].second>Y)Y=m[i].second;
    }
    cout<<(X-x)+1<<" "<<(Y-y)+1<<endl;
  }
}