#include <bits/stdc++.h>

#define mp       make_pair
#define mt	 make_tuple
#define pb       push_back
#define rep(i,n) for(int i=0;i<(n);i++)

using namespace std;

typedef    long long          ll;
typedef    unsigned long long ull;
typedef    pair<int,int>      pii;
typedef    pair<long,long>    pll;

const int INF=1<<29;
const double EPS=1e-9;
const int MOD = 100000007;

const int dx[]={1,0,-1,0},dy[]={0,-1,0,1};
int n;
int main(){
  while (cin >> n){
    if (n == 0)break;
    string tmp;
    int r = 0;
    int l = 0;
    bool up = true;
    int cnt = 0;
    for (int i = 0; i < n; i++){
      cin >> tmp;
      if (tmp == "lu"){
	l = 1;
      }else if (tmp == "ru"){
	r = 1;
      }else if(tmp == "ld"){
	l = 0;
      }else if(tmp == "rd"){
	r = 0;
      }
      if (up){
	if (l == 1 && r == 1){
	  cnt++;
	  up = false;
	}
      }else{
	if (l == 0 && r == 0){
	  cnt++;
	  up = true;
	}
      }
    }
    cout << cnt << endl;
  }
}