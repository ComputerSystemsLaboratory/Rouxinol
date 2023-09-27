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

const char gKeys[10][6] 
= {"",".,!? ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};


int main(){
  char buf[1025];
  int N;
  while(~scanf("%d",&N)){
    for(int t=0;t<N;t++){
      scanf("%s",buf);
      queue<int> que;
      for(int i=0;i<strlen(buf);i++){
	if(buf[i] != '0') que.push(buf[i]-'0');
	else if(buf[i] == '0'){
	  if(que.empty()) continue;
	  int idx = que.size()-1;
	  int key = que.front();
	  int pos = idx%strlen(gKeys[key]);
	  printf("%c",gKeys[key][pos]);
	  que = queue<int>(); //clear que
	}
      }
      printf("\n");
    }
  }
}