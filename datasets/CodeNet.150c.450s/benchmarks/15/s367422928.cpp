#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main()
{
	cin.tie(0);
	ios::ios_base::sync_with_stdio(false);

	int n, q;
	cin >> n;
	vector<int>S(n);
	for (int i = 0; i < n; ++i)cin >> S[i];
	sort(S.begin(), S.end());
	cin >> q;
	vector<int>T(q);
	for (int i = 0; i < q; ++i)cin >> T[i];
	sort(T.begin(), T.end());
	int ans = 0;
	for (int i = 0; i < q; ++i) {
		if(binary_search(S.begin(), S.end(), T[i]))++ans;
	}cout << ans << endl;
}