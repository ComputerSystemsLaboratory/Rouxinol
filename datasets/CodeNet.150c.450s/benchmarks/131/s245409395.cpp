#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
#include <vector>
using namespace std;

int main() {
	int a;
	int L;

	while(cin >> a >> L, a | L) {
		vector<int> v;
		int ans_i = 0, ans_j = 0;
		for(bool flag = true; flag;) {
			stringstream sstr, sstr1, sstr2;
			string str, rev;

			sstr << a;
			sstr >> str;

			v.push_back(a);
			ans_i++;

			sort(str.begin(), str.end());
			rev = str;
			reverse(rev.begin(), rev.end());

			int M, m;
			sstr1 << str; sstr2 << rev;
			sstr1 >> m; sstr2 >> M;

			for(int i = 0; i < L - rev.size(); i++) {
				M *= 10;
			}

			a = M - m;

			for(int i = 0; i < v.size(); i++) {
				if(v[i] == a) {
					ans_j = i;
					flag = false;
					break;
				}
			}
		}

		cout << ans_j << " " << v[ans_j] << " " << ans_i - ans_j << endl;
	}
}