
#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<set>
#include<string>
#include<cmath>
#include<cassert>
#include<map>
  using namespace std;

typedef long long ll;
typedef ll int__;
#define rep(i,j) for(int__ (i)=0;(i)<(j);(i)++)
#define repeat(i,j,k) for(int__ i=(j);i<(k);(i)++)
#define all(v) begin(v),end(v)

const int INF =1<<30;

int main()
{
  const int dx[]={-1,0,1,0};
  const int dy[]={0,1,0,-1};
  
  while(true){
    int n;
    cin>>n;
    if(n==0)break;

    map<int,pair<int,int> > data;
    vector< pair< pair<int,int> ,int> > input(n-1);
    rep(i,n-1){
      cin>>input[i].first.first>>input[i].first.second;
      input[i].second=i+1;
    }
    sort(all(input));
    
    data[0]=make_pair(0,0);
    
    rep(i,n-1){
      pair<int,int> pos=data[input[i].first.first];
      int dir=input[i].first.second;
      int nx=pos.first+dx[dir];
      int ny=pos.second+dy[dir];
      data[input[i].second]=make_pair(nx,ny);
    }

    int min_x=INF,max_x=-INF;
    int min_y=INF,max_y=-INF;
    rep(i,n){
      pair<int,int> pos=data[i];
      min_y=min(min_y,pos.second);
      max_y=max(max_y,pos.second);
      min_x=min(min_x,pos.first);
      max_x=max(max_x,pos.first);
    }

    //printf("x [%d:%d]\n",min_x,max_x);
    //printf("y [%d:%d]\n",min_y,max_y);
    
    
    cout<< max_x-min_x +1<<" "<<max_y-min_y+1<<endl;
    
  }
  
  return 0;
}