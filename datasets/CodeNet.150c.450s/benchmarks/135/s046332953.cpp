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
  int horizontal_num,vertical_num;
  while(~scanf("%d %d",&vertical_num,&horizontal_num)){
    if(vertical_num == 0 && horizontal_num == 0) break;
    vector<int> horizontals;
    vector<int> verticals;
    for(int i=0;i<vertical_num;i++){
      int h;
      scanf("%d",&h);
      verticals.push_back(h);
    }

    map<int,int> freq;
    for(int start=0;start<verticals.size();start++){
      int len = verticals[start];
      freq[len]++;
      for(int last=start+1;last<verticals.size();last++){
	len += verticals[last];
	freq[len]++;
      }
    }

    for(int i=0;i<horizontal_num;i++){
      int w;
      scanf("%d",&w);
      horizontals.push_back(w);
    }

    int res = 0;
    for(int start=0;start<horizontals.size();start++){
      int len = horizontals[start];
      res += freq[len];
      for(int last=start+1;last<horizontals.size();last++){
	len += horizontals[last];
	res += freq[len];
      }
    }
    
    printf("%d\n",res);
  }
}