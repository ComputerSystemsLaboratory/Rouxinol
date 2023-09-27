#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < n; i++)
#define INF 100000000
#define EPS 1e-10
#define MOD 1000000007
using namespace std;
typedef pair<int,int> P;

int n, m;
int s[100], t[100];

int main(){
	while(cin >> n >> m){
		if(n == 0 && m == 0) break;
		int S = 0, T = 0;
		rep(i,n){
			cin >> s[i];
			S += s[i];
		}
		rep(i,m){
			cin >> t[i];
			T += t[i];
		}
		int ok = INF;
		int x, y;
		rep(i,n) rep(j,m){
			if(S+t[j]*2==T+s[i]*2 && s[i]+t[j] < ok){
				x = s[i];
				y = t[j];
				ok = s[i]+t[j];
			}
		}
		if(ok == INF) cout << "-1" << endl;
		else cout <<  x << " " << y << endl;
	}
}