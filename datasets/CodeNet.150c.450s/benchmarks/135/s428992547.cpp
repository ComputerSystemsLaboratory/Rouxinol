#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

int main() {
	long long int n, m;
	while (cin >> n >> m) {
		if (n == 0 && m == 0) {
			break;
		}
		vector<long long int> nn(n+1, 0);
		for (int i = 1; i <= n; i++) {
			cin >> nn[i];
		}
		
		for (long long int i = 1; i <= n; i++) {
			nn[i] += nn[i - 1];
		}
		set<long long int> stn;
		map<long long int, long long int> mpn;
		for (long long int i = 0; i <= n; i++) {
			for (long long int j = i + 1; j <= n; j++) {
				stn.insert(nn[j] - nn[i]);
				mpn[nn[j] - nn[i]]++;
			}
		}
		nn.clear();
		//cout << ' ' << stn.size() << endl;
		vector<long long int> mm(m+1, 0);
		for (long long int i = 1; i <= m; i++) {
			cin >> mm[i];
		}
		for (long long int i = 1; i <= m; i++) {
			mm[i] += mm[i - 1];
		}
		vector<long long int> vm;
		map<long long int, long long int> mpm;
		for (long long int i = 0; i <= m; i++) {
			for (long long int j = i + 1; j <= m; j++) {
				vm.push_back(mm[j] - mm[i]);
				mpm[mm[j] - mm[i]]++;
			}
		}
		sort(vm.begin(), vm.end());
		mm.clear();
		long long int ans = 0;
		for (set<long long int>::iterator ite = stn.begin(); ite != stn.end(); ite++) {
			vector<long long int>::iterator ite2 = lower_bound(vm.begin(), vm.end(), *(ite));
			//cout << *(ite) << ' ' << *(ite2) << endl;
			if (ite2 != vm.end() && *(ite) == *(ite2)) {
				ans += mpn[*(ite)] * mpm[*(ite2)];
			}
		}
		cout << ans << endl;
	}
	return 0;
}