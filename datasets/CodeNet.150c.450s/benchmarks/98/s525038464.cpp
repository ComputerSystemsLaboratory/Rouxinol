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
    int n,m;
    cin >> n >> m;
    if(n==0 && m==0) break;

    vector<int> t,h; //taro, hanako
    int st=0,sh=0; //sum of taro,hanako
    rep(i,n){
      int d;
      scanf("%d", &d);
      t.pb(d);
      st+=d;
    }
    rep(i,m){
      int d;
      scanf("%d", &d);
      h.pb(d);
      sh+=d;
    }

    sort(t.begin(), t.end());
    sort(h.begin(), h.end());

    if((st+sh)%2==1){
      cout << -1 << endl;
      continue;
    }

    int target = (st+sh)/2;
    rep(i,n){ //try (taro to hanako t[i])
      int search = -target+t[i]+sh;
      if(*(lower_bound(h.begin(), h.end(), search)) == search){
	cout << t[i] << " " << search << endl;
	break;
      } else if(i==n-1){
	cout << -1 << endl;
      }
    }

  }

}