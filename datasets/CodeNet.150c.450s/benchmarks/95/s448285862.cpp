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

  while(true){
    int n;
    scanf("%d", &n);

    if(n == 0){
      break;
    }

    bool l = false, r = false;
    llong ans = 0;
    bool isup = false;
    REP(i,n){
      string s;
      cin >> s;
      if(s == "lu"){
        l = true;
      }else if(s == "ld"){
        l = false;
      }else if(s == "ru"){
        r = true;
      }else{
        r = false;     
      }

      if(r & l){
        if(!isup){
          ans++;
          isup = true;
        }
      }    
      if(!r & !l){
        if(isup){
          ans++;
          isup =false;
        }
      }
    }
    printf("%lld\n", ans);
  }
  return 0;
}


