#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
#include <vector>
#include <cmath>
#include <cctype>
#define rep(i,a,b) for(int i=(a);i<b;i++)
#define INF 1000000000
#define MAX_N 100000000
#define MAX 
using namespace std;
bool debug=false;

int cost[105][105];
int d[105];
bool used[105];
int n;

void Input(){
  cin>>n;
  rep(i,0,n)rep(j,0,n)cost[i][j]=INF;
  for(int i=0;i<n;i++){
  	int from,to,num,c;
  	cin>>from>>num;
  	for(int j=0;j<num;j++){
  		cin>>to>>c;
  		cost[from][to]=c;
  	}
  }
  rep(i,0,105){
    used[i]=false;
    d[i]=INF;
  }
}

void solve(){
  d[0]=0;
  while(1){
    int vertex=-1;

    for(int i=0;i<n;i++){
      if(!used[i]&&(vertex==-1||d[i]<d[vertex])){
	    vertex=i;
      }
    }
    if(vertex==-1)break;
    used[vertex]=true;
    for(int i=0;i<n;i++){
      d[i]=min(d[i],d[vertex]+cost[vertex][i]);
    }
  }
}

int main(){
  Input();
  solve();
  for(int i=0;i<n;i++)cout<<i<<" "<<d[i]<<endl;
  return 0;
}