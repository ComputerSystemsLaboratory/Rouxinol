#include <bits/stdc++.h>

using namespace std;

#define FOR(i, n) for(int i = 0; i < (int) n; i++)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define PB push_back
#define F first
#define S second

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

ll basis[62]; // basis[i] keeps the mask of the vector whose f value is i

int sz; // Current size of the basis

void insertVector(ll mask) {
	for (ll i = 0; i < 62; i++) {
		if ((mask & (1LL << i)) == 0) continue; // continue if i != f(mask)

		if (!basis[i]) { // If there is no basis vector with the i'th bit set, then insert this vector into the basis
			basis[i] = mask;
			++sz;
			
			return;
		}

		mask ^= basis[i]; // Otherwise subtract the basis vector from this vector
	}
}

int main(){
	ios::sync_with_stdio(false); cin.tie(0);

	int t; cin >> t;
	while(t--){
		FOR(i, 62) basis[i] = 0;
		sz = 0;

 		int n; cin >> n;
		vector<ll> v(n); FOR(i, n) cin >> v[i];
		string s; cin >> s;
		if(s.back() == '1'){
			cout << "1\n";
			continue;
		}

		bool ok = true;
		for(int i = n-1; i >= 0; i--){
			if(s[i] == '0'){
				insertVector(v[i]);
			}else{
				for(int j = 0; j < 62; j++){
					if(v[i]&(1LL<<j)){
						v[i] ^= basis[j];
					}
				}
				if(v[i]) ok = false;
			}
		}

		if(ok) cout << "0\n";
		else cout << "1\n";
	}


	return 0;
}
