#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int i, j, k, n, l, cnt;
	string in, tmp, pre, f, b;
	vector<string> vs;
	cin >> n;
	for (i = 0; i < n; i++) {
		cnt = 0;
		cin >> in;
		l = in.size();
		vs.push_back(in);
		for (j = 1; j < l; j++) {
			//j : l - j
			//8
			f = in.substr(0, j);
			b = in.substr(j, l - j);

			//vs.push_back(f + b);
			vs.push_back(b + f);

			reverse(f.begin(), f.end());
			vs.push_back(f + b);
			vs.push_back(b + f);


			reverse(b.begin(), b.end());
			vs.push_back(f + b);
			//vs.push_back(b + f);


			reverse(f.begin(), f.end());
			vs.push_back(f + b);
			vs.push_back(b + f);



			/*tmp = in;
			reverse(tmp.begin(), tmp.begin() + j);
			vs.push_back(tmp);
			reverse(tmp.begin(), tmp.end());
			vs.push_back(tmp);*/
			//sort(vs.begin(), vs.end());
		}
		reverse(in.begin(), in.end());
		vs.push_back(in);

		vs.push_back("0");

		sort(vs.begin(), vs.end());

		k = vs.size();
		//pre = "0";

		for (j = 1; j < k; j++) {
			if (vs[j - 1] != vs[j]) {
				cnt++;
			}
			//pre = vs[j];
		}

		//cout << k << endl;

		cout << cnt << endl;





		vs.clear();
	}







	return 0;
}