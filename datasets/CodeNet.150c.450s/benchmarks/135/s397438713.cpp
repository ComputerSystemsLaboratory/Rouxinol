#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int n, m, i, j, cnt, hsum, wsum, tmp, cnti, cntj;
	while (1) {
		cin >> n >> m;
		if (n == 0 && m == 0)break;
		int h[1502], w[1502];
		vector<int> sh, sw;
		hsum = wsum = 0;
		h[0] = 0;
		for (i = 1; i <= n; i++) {
			cin >> tmp;
			hsum += tmp;
			h[i] = hsum;
		}
		w[0] = 0;
		for (i = 1; i <= m; i++) {
			cin >> tmp;
			wsum += tmp;
			w[i] = wsum;
		}
		
		for (i = 0; i <= n - 1; i++) {
			for (j = i + 1; j <= n; j++) {
				sh.push_back(h[j] - h[i]);
			}
		}
		for (i = 0; i <= m - 1; i++) {
			for (j = i + 1; j <= m; j++) {
				sw.push_back(w[j] - w[i]);
			}
		}

		sort(sh.begin(), sh.end());
		sort(sw.begin(), sw.end());
		
		i = j = 0;
		cnt = 0;
		int maxi = sh.size(), maxj = sw.size();
		while (i < maxi && j < maxj) {
			if (sh[i] == sw[j]) {
				cnti = cntj = 1;
				while (i < maxi - 1 && sh[i] == sh[i + 1]) {
					cnti++;
					i++;
				}
				while (j < maxj - 1 && sw[j] == sw[j + 1]) {
					cntj++;
					j++;
				}
				cnt += cnti * cntj;
				i++;
				j++;
			} else if (sh[i] < sw[j]) {
				i++;
			} else {
				j++;
			}
		}
		
		cout << cnt << endl;
		
	}




	return 0;
}