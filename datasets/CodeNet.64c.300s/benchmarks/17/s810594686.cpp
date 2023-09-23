#define _USE_MATH_DEFINES
#define INF 0x3f3f3f3f
#include <cstdio>
#include <iostream>
#include <sstream>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <queue>
#include <stack>
#include <limits>
#include <map>
#include <string>
#include <cstring>
#include <set>
#include <deque>
#include <bitset>
#include <list>
#include <cctype>
#include <utility>
 
using namespace std;
 
typedef long long ll;
typedef pair <int,int> P;
typedef pair <int,P > PP;
 
const static int tx[] = {0,1,0,-1};
const static int ty[] = {-1,0,1,0};

const static double EPS = 1e-8;

int main(){
  int prev;
  int next;
  int sum;
  while(~scanf("%d %d %d",&prev,&next,&sum)){
    if(prev == 0 && next == 0 && sum == 0) break;

    int res = 0;
    for(int orig_x = 1; orig_x <= sum; orig_x++){
      for(int orig_y = sum - orig_x; orig_y >= 1; orig_y--){
        int x = orig_x * (100 + prev) / 100;
        int y = orig_y * (100 + prev) / 100;
        if(x + y != sum) continue;

        int next_x = orig_x * (100 + next) / 100;
        int next_y = orig_y * (100 + next) / 100;
        res = max(next_x + next_y,res);
      }
    }
    printf("%d\n",res);
  }
}