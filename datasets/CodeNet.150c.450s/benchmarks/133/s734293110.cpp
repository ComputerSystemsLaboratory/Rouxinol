#include "bits/stdc++.h"
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
	int d;
	cin >> d;
	vector<int> c(30);
	vector<int> co(d+5);

	rep(i,26) {
		cin >> c[i];
	}

	vector<int> last(26);

	rep(i, 26) {
		last[i]=0;
	}

	int s[30][370];

	rep(j,d) {
		rep(i, 26) {
			cin >> s[i][j];
		}
	}

	int coun = 0;
	/*
	rep(j, d) {
		vector<int> s(26);
		int count = 0;

		rep(i, 26) {
			cin >> s[i];
		}
		int max=s[0];
		int max_d=0;

		rep(i, 26) {
			if (max <= s[i]) {
				max = s[i];
				max_d = i;
			}
		}

		last[max_d] = j+1;
		count = max;

		rep(i, 26) {
			count -= c[i] * (j+1-last[i]);
		}
		co[j] = count;
	}
	*/
	vector<int> t(d + 5);
	rep(i, d) {
		cin >> t[i];
	}

	rep(j, d) {
	
		rep(i, 26) {

			if ( (t[j]-1) != i) {
				coun -= c[i]*(j + 1 - last[i]);
			}
			else {
				coun += s[i][j];
			//	cout << s[i][j] << endl;
				last[i] = j+1;
			}
		}
		co[j] = coun;
	}


	rep(j, d) {
		cout << co[j]<<endl;
	}

	return 0;
}