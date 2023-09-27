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
  
static const int tx[] = {0,1,0,-1};
static const int ty[] = {-1,0,1,0};

int main(){
  int registered_num,enter_num;
  while(~scanf("%d",&registered_num)){
    map<string,bool> table;
    for(int i=0;i<registered_num;i++){
      string key;
      cin >> key;
      table[key] = true;
    }
    scanf("%d",&enter_num);
    int count = 0;
    for(int i=0;i<enter_num;i++){
      string key;
      cin >> key;
      if(table.find(key) == table.end()){
	// Unknown abcc
	printf("%s %s\n","Unknown",key.c_str());
      }
      else{
	// Opened by abcd
	// Closed by efgh	
	printf("%s by %s\n",(count % 2 == 0) ? "Opened" : "Closed",key.c_str());
	count++;
      }
    }
  }
}