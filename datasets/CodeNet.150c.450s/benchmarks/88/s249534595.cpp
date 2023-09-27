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

bool isbig(int a, int b, int c, int d){
  if(a*a + b*b > c*c + d*d){
    return true;
  }else if(a*a + b*b == c*c + d*d){
    return a > c;
  }
  return false;
}

int main(){

  const int N = 151;
  while(true){
    int h, w;
    scanf("%d %d", &h, &w);

    if(h == 0 && w == 0){
      break;
    }

    int x = -1, y = -1;
    bool found = false;
    FOR(i,1,N){
      FOR(j,i+1,N){
        if(i == h && j == w){
          continue;
        }

        if(!found){
          if(isbig(i,j,h,w)){
            x = i, y = j;
            found = true;
            //cout << x << " " << y << endl;
          }
        }else{
          if(isbig(i,j,h,w) && isbig(x,y,i,j)){
            x = i;
            y = j;
          }
        }
      }
    }
    printf("%d %d\n", x, y);
  }
  return 0;
}


