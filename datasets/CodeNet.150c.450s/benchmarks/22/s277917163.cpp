#include <iostream>
#include <cstdio>                                               //scanf,printf
#include <algorithm>                                            //max,min
#include <string>                                               //string
#include <cstring>                                              //strlen,strcat
#include <cctype>                                               //isalpha,tolower
#include <cmath>                                                //sqrt,sin
#include <stack>                                                //top,push
#include <queue>                                                //front,push
#include <vector>                                               //push_back,sort
#include <set>                                                  //insert,begin
#include <map>                                                  //insert,find
#include <list>                                                 //push_front,begin
#include <stdio.h>
#include <string.h>
#include <cstdlib>
#include <math.h>                                               //pow,powf
#define INF (1<<21)
using namespace std;
int dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};
#define ll         long long
#define pl pair<long long, long long>
#define pr pair<int,int>

#define MAX_E 2001
#define MAX_v 1001


struct edge{
  int from,to,cost;
};

edge es[MAX_E];
int d[MAX_v];
int v,e;

bool bellman_ford(int s){
  for(int i=0; i<v; i++){
    d[i]=INF;
  }
  d[s]=0;
  for (int j=0; j<v; j++) {
    for(int i=0; i<e; i++){
      edge e=es[i];
      if(d[e.from]!=INF && d[e.to]>d[e.from]+e.cost){
        d[e.to]=d[e.from]+e.cost;
        
        if(j==v-1) return true;
      }
    }
  }
  return false;
}

int main(){
  int r;
  cin>>v>>e>>r;
  for(int i=0; i<e; i++){
    cin>>es[i].from>>es[i].to>>es[i].cost;
  }
  if(bellman_ford(r)) {
    cout<<"NEGATIVE CYCLE"<<endl;
    return 0;
  }
  
  for(int i=0; i<v; i++){
    if(d[i]==INF) cout<<"INF"<<endl;
    else cout<<d[i]<<endl;
  }
}

