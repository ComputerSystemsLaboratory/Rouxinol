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

bool solve(){
  int n;
  int score[SIZE];
  
  scanf("%d",&n);

  if(n == 0) return false;
  
  for(int i=0;i<n;i++){
    scanf("%d",score+i);
  }

  sort(score, score+n);

  int sum = 0;

  for(int i=1;i<n-1;i++)
    sum += score[i];

  printf("%d\n",sum/(n-2));

  return true;
}

int main(){

  while(solve());
  
  return 0;
}