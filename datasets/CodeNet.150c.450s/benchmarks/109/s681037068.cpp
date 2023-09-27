#ifndef _WIN32
#include<iostream>
#endif // !_WIN32

#include<algorithm>
#include<vector>
#include<string>
#include<iomanip>
#include<map>
using namespace std;
#define FOR(i,bg,ed) for(int i=(bg);i<(ed);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(v) (v).begin(),(v).end()
int main() {
	int N;
	while (cin >> N, N) {
		vector<string> s;
		REP(i,N){
			string t;
			cin >> t;
			s.push_back(t + "1");
			cin >> t;
			s.push_back(t + "0");
		}
		sort(ALL(s));
		int lb = 0;
		int ub = N;
		auto f = [&](int cnt) {
			for (auto &it : s) {
				if (it.back() == '1')cnt--; else cnt++;
				if (cnt < 0)return false;
			}
			return true;

		};
		while (ub - lb > 1) {
			const int mid = (lb + ub) / 2;
			if (f(mid))ub = mid;
			else lb = mid;
		}
		cout << ub << endl;
	}

}