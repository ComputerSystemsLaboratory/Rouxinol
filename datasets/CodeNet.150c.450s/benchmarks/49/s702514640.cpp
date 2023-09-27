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
    int n;
    cin >> n;

    if(n==0) break;

    int sum=0, a=INF, b=-1; //a:min, b:max

    rep(i,n){
      int s;
      scanf("%d",&s);
      sum += s;
      a=min(a,s);
      b=max(b,s);
    }
    sum=(sum-a-b)/(n-2);

    cout << sum << endl;

  }

}