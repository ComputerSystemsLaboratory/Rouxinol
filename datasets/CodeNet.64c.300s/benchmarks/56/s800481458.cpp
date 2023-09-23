#include <cstdio>
#include <cstring>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <set>
using namespace std;

#define rep(i,n) for(int i=0;i<(n);i++)
#define mp(a,b) make_pair(a,b)
#define pb(a) push_back(a)
#define dbg(x) cout<<#x"="<<x<<endl

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<pii, int> ppi;

#define INF 1000000000

// count past days from 1/1/1
int days(int y,int m,int d){
  int res=0;
  res += (y-1)*195 + ((y-1)/3)*5;
  if(y%3==0) res += (m-1)*20;
  else res += (m-1)*20 - ((m-1)/2);
  res += d-1;
  return res;
}

int main(){
  int n;
  cin >> n;

  int mill = days(1000,1,1);

  rep(i,n){
    int y,m,d;
    scanf("%d %d %d", &y, &m, &d);
    printf("%d\n", mill - days(y,m,d));
  }

}