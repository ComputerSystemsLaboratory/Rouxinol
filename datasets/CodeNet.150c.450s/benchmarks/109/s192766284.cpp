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

int cnt[60*60*24 + 1];

int main(){
  int n;
  while(scanf("%d",&n), n){
    int h,m,s,hh,mm,ss;
    memset(cnt, 0, sizeof(cnt));
    REP(i,n){
      scanf("%d:%d:%d %d:%d:%d",&h,&m,&s,&hh,&mm,&ss);
      //printf("%d:%d:%d %d:%d:%d\n",h,m,s,hh,mm,ss);
      int st = h * 3600 + m * 60 + s;
      int ed = hh* 3600 + mm* 60 + ss;

      do{
        ++cnt[st];
      }while(++st < ed);
    }

    int ans = 0;
    REP(i,60*60*24+1)
      ans = max(ans, cnt[i]);

    print(ans);
  }
  return 0;
}