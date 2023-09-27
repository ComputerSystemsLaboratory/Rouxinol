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
#include<cassert>

#define f first
#define s second
#define mp make_pair

#define REP(i,n) for(int i=0; i<(int)(n); i++)
#define FOR(i,c) for(__typeof((c).begin()) i=(c).begin(); i!=(c).end(); i++)
#define ALL(c) (c).begin(), (c).end()

using namespace std;

typedef unsigned int uint;
typedef long long ll;

#define MAX 1000001

int main(){
  int num[34] = {1};
  REP(i,31){
    num[i+3] += num[i];
    num[i+2] += num[i];
    num[i+1] += num[i];
  }
  int n;
  while(scanf("%d",&n),n)
    printf("%d\n",(num[n]+3649)/3650);
  return 0;
}