#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<cstdio>
#include<climits>
#include<cmath>
#include<cstring>
#include<string>
#include<complex>

#define f first
#define s second
#define mp make_pair

#define REP(i,n) for(int i=0; i<(int)(n); i++)
#define FOR(i,c) for(__typeof((c).begin()) i=(c).begin(); i!=(c).end(); i++)
#define ALL(c) (c).begin(), (c).end()

using namespace std;

typedef unsigned int uint;
typedef long long ll;
typedef complex<double> P;

int main(){
  int n,p;
  while(cin>>n>>p, n+p){
    vector<int> v(n);
    int st = p;
    int ans;
    while(true){
      REP(i,n){
	if(st == 0){
	  st += v[i];
	  v[i] = 0;
	}else{
	  st--;
	  v[i]++;
	  if(v[i] == p){
	    ans = i;
	    goto end;
	  }
	}
      }
    }
  end:
    cout << ans << endl;
  }
  return 0;
}