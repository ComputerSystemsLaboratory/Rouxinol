#include <bits/stdc++.h>
#define lsb(x) (x & (-x))
#define ll long long
#define ull unsigned long long
#define Test(tt) cout << "Case #" << tt << ": "

using namespace std;



int main() {
#ifdef HOME
    ifstream cin("B.in");
    ofstream cout("B.out");
#endif
   	int	t, i;
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

	cin >> t;
	while(t--) {
		int n;
		cin >> n;

		vector<ll> values(n);
		for(i = 0; i < n; i++) {
			cin >> values[i];
		}

		string str;
		cin >> str;

		vector<int> id(60, -1);
		bool ans = 1;

		for(i = n - 1; i >= 0; i--) {
			bool found = 1;

			for(int bit = 59; bit >= 0; bit--) {
				if(values[i] & (1LL << bit)) {
					if(id[bit] != -1) {
						values[i] ^= values[id[bit]];
					}
					else {
						id[bit] = i;
						found = 0;
						break;
					}
				}
			}

			if(str[i] == '1' && found == 0) {
				ans = 0;
				break;
			}
		}

		cout << (ans ^ 1) << "\n";
	}

    return 0;
}