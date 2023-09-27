#include <cstdlib>
#include <iostream>
using namespace std;

#define REP(i, a, b) for(int i = (a); i < int(b); ++i)
#define rep(i, n) REP(i, 0, n)

int main(){
	for(int n; cin >> n && n;) {
		bool next = true, left = false, right = false;

		int ans = 0;
		rep(i, n) {
			string f;
			cin >> f;

			(f[0] == 'l' ? left : right) = (f[1] == 'u' ? true : false);

			if(next == left && next == right) {
				next = !next;
				++ans;
			}
		}

		cout << ans << endl;
	}

	return EXIT_SUCCESS;
}