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
 
static const int tx[] = {0,1,0,-1};
static const int ty[] = {-1,0,1,0};
 
static const double EPS = 1e-8;

int main(){
  int interval_num,money;
  while(~scanf("%d %d",&interval_num,&money)){
    if(interval_num == 0) break;

    int encounter_freq[11];
    memset(encounter_freq,0,sizeof(encounter_freq));

    int total = 0;
    for(int i=0;i<interval_num;i++){
      int dist,encounter_num;
      scanf("%d %d",&dist,&encounter_num);
      total += dist * encounter_num;
      encounter_freq[encounter_num]+=dist;
    }

    for(int freq=10;freq>=0;freq--){
      while(encounter_freq[freq] > 0 && money > 0){
	total -= freq;
	money--;
	encounter_freq[freq]--;
      }
    }

    printf("%d\n",total);
  }
}