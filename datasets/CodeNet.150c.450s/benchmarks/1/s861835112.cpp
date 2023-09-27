#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
using namespace std;
int main() {
	constexpr int INF = numeric_limits<int>::max()/2;
	int n;
	cin>>n;
	vector<int> a(n);
	for (auto& i : a) cin>>i;
	vector<int> dp(n, INF);	//dp[i] = minimum last element of LIS which has length i
	for (auto& i : a)
		*lower_bound(begin(dp),end(dp),i) = i;
	cout << lower_bound(begin(dp),end(dp),INF)-dp.begin() << endl;
	return 0;
}