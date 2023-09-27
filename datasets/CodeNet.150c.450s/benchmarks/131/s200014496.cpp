#include <bits/stdc++.h>
using namespace std;

const int INF = 1e+8;
const int E_MAX = 1000000;

int main() {
	string s;
	int L;
	while(cin >> s >> L && L){
		int cnt = 0;
		vector<int> data;
		data.push_back(stoi(s));
		while(1){
			++cnt;
			while(s.size() < L){
				s  = "0" + s;
			}
			sort(s.begin(), s.end());
			int r = stoi(s);
			reverse(s.begin(), s.end());
			int l = stoi(s);
			auto it = find(data.begin(), data.end(), l - r);
			if(it != data.end()){
				int index = distance(data.begin(), it);
				cout << index << " " << l - r << " " << cnt - index << endl;
				break;
			}
			data.push_back(l - r);
			s = to_string(l - r);
		}
	}
	return 0;
}