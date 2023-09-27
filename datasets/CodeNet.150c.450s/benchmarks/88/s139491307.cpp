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


int main(){
  vector<pair<int, pair<int,int> > > vec;
  int x,y;

  while(1){
    scanf("%d%d",&x,&y);
    if(x + y == 0) break;

    int ans_x,ans_y, t = INF;
    
    for(int i=1;i<=201;i++){
      for(int j=i+1;j<=202;j++){
        int q = i*i + j*j;
        if(((x*x + y*y == q && x < i) || x*x + y*y < q)
           && ( q < t || (q == t && i < ans_x))){
          ans_x = i;
          ans_y = j;
          t = i*i + j*j;
        }
      }
    }

    printf("%d %d\n",ans_x, ans_y);
    
  }
  
  return 0;
}