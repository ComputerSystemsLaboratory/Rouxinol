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
  int player_num;
  int winner_idx;
  int cut_off_rate;
  while(~scanf("%d %d %d",&player_num,&winner_idx,&cut_off_rate)){
    if(player_num == 0) break;
    int vote_num[101];
    int carry = 0;
    for(int i=1;i<=player_num;i++){
      scanf("%d",vote_num + i);
      carry += vote_num[i]*100;
    }
    
    carry *= (double)(100-cut_off_rate)/100.0 + EPS;
    
    printf("%d\n",vote_num[winner_idx] == 0 ? 0 : carry/vote_num[winner_idx]);
  }
  
}