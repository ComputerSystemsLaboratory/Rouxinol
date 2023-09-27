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
#include <unordered_map>
#include <unordered_set>

#include <complex>

#include <functional>
#include <cassert>

typedef long long ll;
using namespace std;

#define debug(x) cerr << #x << " = " << (x) << endl;


#define mod 1000000007 //1e9+7(prime number)
#define INF 1000000000 //1e9
#define LLINF 2000000000000000000LL //2e18
#define SIZE 100010

int dx[8] = {-1,0,1,0,1,1,-1,-1};
int dy[8] = {0,1,0,-1,1,-1,1,-1};

bool solve(){
  int p_x[SIZE], p_y[SIZE];

  int n;

  scanf("%d",&n);

  if(n == 0) return false;
  
  for(int i=1;i<n;i++){
    int m, d;

    scanf("%d%d",&m,&d);

    p_x[i] = p_x[m] + dx[d];
    p_y[i] = p_y[m] + dy[d];
  }

  int min_x = 0, max_x = 0, min_y = 0, max_y = 0;

  for(int i=0;i<n;i++){
    min_x = min(min_x, p_x[i]);
    max_x = max(max_x, p_x[i]);
    min_y = min(min_y, p_y[i]);
    max_y = max(max_y, p_y[i]);
  }

  printf("%d %d\n",max_x-min_x+1, max_y-min_y+1);

  return true;
}

int main(){

  while(solve());
  
  return 0;
}