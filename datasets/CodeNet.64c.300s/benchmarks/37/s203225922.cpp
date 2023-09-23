#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <climits>
#include <vector>
#include <map>
#include <set>
#include <list>
#include <stack>
#include <queue>
#include <algorithm>
#include <iostream>
#include <string>

#define REP(i,n) for(int i=0;i<n;++i)
#define REPR(i,n) for(int i=n;i>=0;--i)
#define REPI(itr,v) for(auto itr=v.begin();itr!=v.end();++itr)
#define REPIR(itr,v) for(auto itr=v.rbegin();itr!=v.rend();++itr)
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define SORT(v,n) sort(v, v+n)
#define SORTV(v) sort(v.begin(), v.end())
#define ALL(v) v.begin(),v.end()
#define llong long long
#define INF 999999999
#define SUR 1000000007
#define pb push_back
#define pf push_front
#define MP make_pair

int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};

using namespace std;

typedef pair<int,int> pii;

int main(){

  const int N = 1001;
  
  llong table[N] = {};
  FOR(i,1,N){
    table[i] = table[i - 1] + i;
  }

  while(true){
    int n;
    scanf("%d", &n);

    if(n == 0){
      break;
    }

    llong ans = 0;
    FOR(i,1,N){
      for(int j = 1; j < i; j++){
        if(n == table[i] - table[j - 1]){
          ans++;
          //cout << table[j] << " " << table[i] << endl;
        }
      }
    }

    printf("%lld\n", ans);
  }
  return 0;
}


