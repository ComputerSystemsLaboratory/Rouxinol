#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < n; i++)
const int    INF = 100000000;
const double EPS = 1e-10;
const int    MOD = 1000000007;
using namespace std;
typedef pair<int,int> P;

int main(){
	int x[10];
	rep(i,10) cin >> x[i];
	sort(x,x+10,greater<int>());
	rep(i,3) cout << x[i] << endl;
}