#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>

#include <iostream>
#include <complex>
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

#define debug(x) cerr << __LINE__ << " : " << #x << " = " << (x) << endl;

#define mod 1000000007 //1e9+7(prime number)
#define INF 1000000000 //1e9
#define LLINF 2000000000000000000LL //2e18
#define SIZE 100010


int main(){
  int n;
  bool connected[200][200] = {};
  
  scanf("%d", &n);

  for(int i=0;i<n;i++){
    int u, k, v;

    scanf("%d%d", &u, &k);
    u--;
    
    for(int j=0;j<k;j++){
      scanf("%d", &v);
      v--;

      connected[u][v] = true;
    }
  }

  queue<int> q1, q2;
  bool visited[200] = {};
  int ans[200];

  for(int i=0;i<n;i++) ans[i] = -1;
  
  q1.push(0);

  for(int i=0;q1.size();i++){

    while(q1.size()){
      int p = q1.front();
      q1.pop();

      if(visited[p]) continue;
      visited[p] = true;

      ans[p] = i;
      
      for(int j=0;j<n;j++){
        if(connected[p][j]){
          q2.push(j);
        }
      }
    }

    q1 = q2;
    q2 = queue<int>();
  }

  for(int i=0;i<n;i++)
    printf("%d %d\n", i+1, ans[i]);
  
  return 0;
}

