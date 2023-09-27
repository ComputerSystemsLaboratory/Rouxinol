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
  int n[2];
  int sum[2] = {};
  int card[2][SIZE];
  
  scanf("%d%d",n+0,n+1);

  if(n[0] == 0){
    return false;
  }
  
  for(int i=0;i<2;i++){
    for(int j=0;j<n[i];j++){
      scanf("%d",card[i]+j);
      sum[i] += card[i][j];
    }
  }

  int ans1 = -1, ans2 = -1, t_sum = INF;

  for(int i=0;i<n[0];i++){
    for(int j=0;j<n[1];j++){

      if(sum[0] - card[0][i] + card[1][j] ==
         sum[1] - card[1][j] + card[0][i]){

        if(t_sum > card[0][i] + card[1][j]){
          t_sum = card[0][i] + card[1][j];
          ans1 = card[0][i];
          ans2 = card[1][j];
        }
      }
      
    }
  }
  
  if(ans1 == -1){
    puts("-1");
  }else{
    printf("%d %d\n",ans1, ans2);
  }

  return true;
}

int main(){

  while(solve());
  
  return 0;
}