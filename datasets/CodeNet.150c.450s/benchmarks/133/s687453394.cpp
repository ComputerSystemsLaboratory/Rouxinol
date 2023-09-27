#include<bits/stdc++.h>

#define EPS (1e-10)
#define equals(a, b) (fabs((a) - (b)) < EPS)
#define pb push_back
#define rep(i, n) for(int i = 0; i < (n); i++)
#define INF (1 << 29)

using namespace std;
typedef long long ll;

const int nc = 26;
int D;
ll c[40], t[400];
ll s[400][40];

void scoring(){
	vector<int> last(nc+10, -1);

	long long sat = 0;

	for(ll d = 0; d < D; d++){
		last[t[d]] = d;

		for(int i = 0; i < nc; i++){
			sat -= c[i] * (d - last[i]);
		}
		sat += s[d][t[d]];
		cout << sat << endl;
	}
}

int main(){
	cin >> D;

	for(int i = 0; i < nc; i++){
		cin >> c[i];
	}

	for(int i = 0; i < D; i++){
		for(int j = 0; j < nc; j++){
			cin >> s[i][j];
		}
	}

		for(int i = 0; i < D; i++){
		cin >> t[i];
		t[i]--;
	}

	scoring();

	return 0;
}
