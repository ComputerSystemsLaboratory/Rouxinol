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

int main(){
  while(true){
    int n,m,p;
    cin >> n>>m>>p;
    if(n==0 && n==0 && p==0) break;

    int sum=0;
    int win;
    rep(i,n){
      int d;
      scanf("%d", &d);
      sum+=d;
      if(i==m-1) win=d;
    }

    if(win==0) cout << 0 << endl;
    else cout << sum*(100-p)/win<< endl;
    // sum*100*(100-p)/100/win
  }
}