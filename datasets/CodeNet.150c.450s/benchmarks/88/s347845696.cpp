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
 
int tx[] = {0,1,0,-1};
int ty[] = {-1,0,1,0};
 
static const double EPS = 1e-8;

int main(){
  int H,W;
  while(~scanf("%d %d",&H,&W)){
    if(H==0 && W==0) break;

    int res_h = H+1;
    int res_w = W+1;
    for(int h=150;h>=1;h--){
      for(int w=150;w>=1;w--){
	if(h*h + w*w < H*H + W*W) continue;
	if(h*h + w*w == H*H + W*W
	   && h <= H) continue;
	if(h >= w) continue;

	if(h*h + w*w == res_h*res_h + res_w*res_w
	   && h < res_h){
	  res_h = h;
	  res_w = w;
	}
	else if(h*h + w*w < res_h*res_h + res_w*res_w){
	  res_h = h;
	  res_w = w;
	}
      }
    }
    printf("%d %d\n",res_h,res_w);
  }
}