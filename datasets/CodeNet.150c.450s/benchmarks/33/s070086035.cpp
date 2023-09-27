#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>

#include <functional>
#include <cassert>

typedef long long ll;
using namespace std;

#define mod 1000000007 //1e9+7
#define INF 1000000000 //1e9
#define LLINF 2000000000000000000LL //2e18
#define SIZE 1001


void calc(int x,int y,int s){
  int ans = 0;
  vector<int> vec[SIZE];

  for(int i=1;i<=1000;i++){
    if(i*(100+x)/100 > 1000) break;
    vec[i*(100+x)/100].push_back(i);
  }
  
  for(int i=1;i<s;i++){
    int a = s-i;
    int b = i;
    
    for(int j=0;j<vec[a].size();j++){
      for(int k=0;k<vec[b].size();k++){
	ans = max(ans, vec[a][j]*(100+y)/100 + vec[b][k]*(100+y)/100);
      }
    }
  }
  
  printf("%d\n",ans);
  
  return;
}

int main(){
  int x,y,s;
  
  while(1){
    scanf("%d%d%d",&x,&y,&s);
    
    if(x==0) break;
    
    calc(x,y,s);
  }

  return 0;
}