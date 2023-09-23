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

int num[100];
ll memo[100][21];
int n;

inline bool valid(int n){
  return n <= 20 && n >= 0;
}

ll solve(int pos, int sum){
  if(pos == n - 1)
    return sum == num[n-1] ? 1 : 0;

  if(memo[pos][sum] != -1)
    return memo[pos][sum];

  ll ret = 0;
  if(valid(sum + num[pos]))
    ret += solve(pos + 1, sum + num[pos]);
  if(pos != 0 && valid(sum - num[pos]))
    ret += solve(pos + 1, sum - num[pos]);

  return memo[pos][sum] = ret;
}

int main(){
  n = getInt();
  memset(memo, -1, sizeof(memo));
  REP(i,n) num[i] = getInt();
  cout << solve(0, 0) << endl;
  return 0;
}