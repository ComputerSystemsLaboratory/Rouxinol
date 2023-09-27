#include <bits/stdc++.h>
using namespace std;

int	main()
{
	int	cnt[100][100];
	int	n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j)
			cnt[i][j] = -1;
		cnt[i][i] = 0;
	}
	vector<int>	r_vec(n), c_vec(n);
	for (int i = 0; i < n; ++i)
		cin >> r_vec.at(i) >> c_vec.at(i);
	for (int i = 1; i < n; ++i) {
		int	k;
		for (int j = 0; (k = i + j) < n; ++j) {
			for (int l = j; l < k; ++l) {
				int	tmp_cnt = cnt[j][l] + cnt[l + 1][k];
				tmp_cnt += r_vec.at(j) * c_vec.at(l) * c_vec.at(k);
				if (cnt[j][k] == -1 || cnt[j][k] > tmp_cnt)
					cnt[j][k] = tmp_cnt;
			}
		}
	}
	cout << cnt[0][n - 1] << endl;
}



