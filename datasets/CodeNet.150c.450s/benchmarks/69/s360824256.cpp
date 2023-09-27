#include <algorithm>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <functional>
#include <iostream>
#include <ostream>
#include <queue>
#include <stack>
#include <string>
#include <vector>
#define INF 1000000000
#define rep(i,a,b) for (int i=(a);i<(b);i++)
#define rev(i,a,b) for (int i=(a)-1;i>=b;i--)
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef queue<int> qi;
typedef queue< pair<int, int> > qpii;
typedef vector<int> vi;
typedef vector<int, int> vii;
typedef vector<string> vs;
typedef vector< pair<int, int> > vpii;
int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { 1, 0, -1, 0 };

int n[10];
int h, w;

bool dfs(int b, int c, int cnt) {
  if(cnt == 10) return true;
  if(n[cnt] > n[b]) {
    if(dfs(cnt, c, cnt+1)) return true;
  }
  if(c == -1 || n[cnt] > n[c]) {
    if(dfs(b, cnt, cnt+1)) return true;
  }
  return false;
}

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

  int num;
  cin >> num;
  rep(i,0,num) {
    rep(j,0,10) cin >> n[j];

    if(dfs(0, -1, 1)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }

	return 0;
}