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

vector<pair<int,pair<int,int> > > vec;


bool calc(){
  int h,w;

  scanf("%d%d",&h,&w);

  if(h==0) return false;

  auto it = upper_bound(vec.begin(),vec.end(),make_pair(h*h+w*w,make_pair(h,w)));

  printf("%d %d\n",it->second.first,it->second.second);
  
  return true;
}

int main(){

  for(int i=1;i<=150;i++){
    for(int j=i+1;j<=150;j++){
      vec.push_back({i*i+j*j,{i,j}});
    }
  }

  sort(vec.begin(),vec.end());
  
  while(calc());
  
  return 0;
}