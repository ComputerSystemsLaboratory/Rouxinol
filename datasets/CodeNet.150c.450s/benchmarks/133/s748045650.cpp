#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define REP(i,n) for(int i=1;i<=n;i++)
typedef long long ll;

const int n = 26;
ll s[365][26];

int main(){
	ll d;
	cin >> d;
	vector<ll> c(n+1); //満足度低下
	REP(i,n) cin >> c[i];
	REP(i,d){
		REP(j,n){
			cin >> s[i][j];
		}
	}
	vector<ll> schedule(d+1);
	REP(i,d) {
		cin >> schedule[i];
		schedule[i];
	}
	vector<ll> score(d+1);
	vector<ll> last(n+1,0);
	ll score_d = 0;
	//iは何日目
	REP(i,d){
		score_d += s[i][schedule[i]];
		last[schedule[i]] = i;
		REP(j,n){
			score_d -= c[j]*(i - last[j]);
		}
		cout << score_d << endl;
	}
    return 0;
}

