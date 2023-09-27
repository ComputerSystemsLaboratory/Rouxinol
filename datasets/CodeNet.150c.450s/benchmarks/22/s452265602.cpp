#include <algorithm>
#include <cstdio>
#include <iostream>
#include <map>
#include <cmath>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <bitset>
#include <cstring>
#include <deque>
#include <iomanip>
#include <limits>
#include <fstream>
using namespace std;
#define FOR(I,A,B) for(int I = (A); I < (B); ++I)
#define CLR(mat) memset(mat, 0, sizeof(mat))
typedef long long ll;
const int MAXE = 2020;
const int MAXV = 1010;
struct edge {
  int from;
  int to;
  int cost;
};
edge es[MAXE];
int d[MAXV];
int V, E;
void shortest_path(int s){
  for(int i=0;i<=V;i++) d[i]=1e9;
  d[s]=0;
  int cnt=0;
  while(true){
    cnt++;
    if(cnt > E + 1) {
        cout<<"NEGATIVE CYCLE"<<endl;
        exit(0);
    }
    bool update=false;
    for(int i=0;i<E;i++){
      if(d[es[i].from]!=1e9&&d[es[i].to]>d[es[i].from]+es[i].cost){
        d[es[i].to]=d[es[i].from]+es[i].cost;
        update=true;
      }
    }
    if(!update)break;
  }
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int r;
  cin>>V>>E>>r;
  FOR(i,0,E){
      cin>>es[i].from>>es[i].to>>es[i].cost;
  }
  shortest_path(r);
  FOR(i,0,V){
      if(d[i] == 1e9) cout<<"INF"<<endl;
      else cout<<d[i]<<endl;
  }
  return 0;
}
