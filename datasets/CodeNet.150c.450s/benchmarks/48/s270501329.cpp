#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<map>
#include<set>
#include<queue>
#include<cstdio>
#include<climits>
#include<cmath>
#include<cstring>
#include<string>
#include<sstream>
#include<numeric>
#include<cassert>

#define f first
#define s second
#define mp make_pair

#define REP(i,n) for(int i=0; i<(int)(n); i++)
#define rep(i,s,n) for(int i=(s); i<(int)(n); i++)
#define FOR(i,c) for(__typeof((c).begin()) i=(c).begin(); i!=(c).end(); i++)
#define ALL(c) (c).begin(), (c).end()
#define IN(x,s,g) ((x) >= (s) && (x) < (g))
#define ISIN(x,y,w,h) (IN((x),0,(w)) && IN((y),0,(h)))
#define print(x) printf("%d\n",x)

using namespace std;

typedef unsigned int uint;
typedef long long ll;

const int _dx[] = {0,1,0,-1};
const int _dy[] = {-1,0,1,0};

int getInt(){
  int ret = 0,c;
  c = getchar();
  while(!isdigit(c)) c = getchar();
  while(isdigit(c)){
    ret *= 10;
    ret += c - '0';
    c = getchar();
  }
  return ret;
}

int main(){
  while(int e = getInt()){
    int m = INT_MAX;
    for(int z = 0; z * z * z <= e; z++){
      int z3 = z * z * z;
      for(int y = 0; y * y + z3 <= e; y++){
	int y2 = y * y;
	int x  = e - z3 - y2;
	m = min(m, x + y + z);
      }
    }
    print(m);
  }
  return 0;
}