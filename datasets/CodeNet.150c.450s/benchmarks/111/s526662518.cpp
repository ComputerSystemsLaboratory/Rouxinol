#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<algorithm>
#include<cstring>
#include<ctime>
#include<deque>
#include<sstream>
#include<iomanip>
#include<sstream>
#include<vector>
#include<queue>
#include<stack>
#include<string>
#include<climits>
#include<map>
#include<set>
#include<list>
#include<cassert>
#include<deque>
#define REP(i,s,n) for(int i=s;i<n;i++)
#define rep(i,n) REP(i,0,n)
#define INF 1<<27
#define all(n) n.begin(),n.end()

#define F first
#define S second
#define pb push_back
#define foreach(i,c) for(iter(c) i=(c).begin();i!=(c).end();++i)
using namespace std;
typedef pair<int,int> P;
typedef pair<P,P> PP;
typedef long long ll;
typedef unsigned long long ull;

int main(){
  int N;

  while(cin >> N){  
    int res;
    vector<int> el;
    rep(i,N-1){
      int aa;
      cin >> aa;
      el.pb(aa);
    }
    cin >> res;
    ull cnt = 0;
    ull dp[22][102];
    rep(i,102)rep(j,22)dp[j][i] = 0;
    dp[el[0]][0] = 1;

    rep(i,el.size()-1){
      // cout << "i = " << i << endl;
      rep(j,21){
	if(dp[j][i] == 0)continue;
	int next = j + el[i+1];
	if(0<= next && next <= 20){
	  dp[next][i+1] += dp[j][i];
	} 
	next = j - el[i+1];
	if(0<= next && next <= 20){
	  dp[next][i+1] += dp[j][i];
	}
      }
    }
  

    cout << dp[res][el.size()-1] << endl;

  }
return 0;
}