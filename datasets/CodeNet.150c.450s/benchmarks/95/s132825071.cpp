#define _USE_MATH_DEFINES
#define INF 0x3f3f3f3f

#include <iostream>
#include <cstdio>
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
typedef pair <int,P> PP;
  
static const double EPS = 1e-8;
  
int tx[] = {0,1,0,-1};
int ty[] = {-1,0,1,0};

int main(){
  int total_steps;
  while(~scanf("%d",&total_steps)){
    if(total_steps == 0) break;

    int left_state = 0;
    int right_state = 0;
    int next_target = 1;
    int res = 0;
    for(int step_idx = 0; step_idx < total_steps; step_idx++){
      char command[12];
      scanf("%s",command);

      bool is_updated = false;
      if(strcmp(command,"lu") == 0){
        if(left_state == 0){
          is_updated = true;
          left_state = 1;
        }
      }
      else if(strcmp(command,"ru") == 0){
        if(right_state == 0){
          is_updated = true;
          right_state = 1;
        }
      }
      else if(strcmp(command,"ld") == 0){
        if(left_state == 1){
          is_updated = true;
          left_state = 0;
        }
      }
      else if(strcmp(command,"rd") == 0){
        if(right_state == 1){
          is_updated = true;
          right_state = 0;
        }
      }

      if(is_updated 
         && (right_state == left_state)
         && (right_state == next_target)){
        res++;
        next_target = (next_target == 1 ? 0 : 1);
      }
    }

    printf("%d\n",res);
  }
}