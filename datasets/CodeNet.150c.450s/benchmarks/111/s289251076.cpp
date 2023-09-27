//AOJ 0557
#include <iostream>
#include <vector>
#include <cstring>
#include <cstddef>
using namespace std;

intmax_t n;
vector<intmax_t> nums;
intmax_t dp[101][21];

intmax_t getExpr(intmax_t pos, intmax_t val) {
	if (pos == n-1) return val == nums.back();
	intmax_t& res = dp[pos][val];
	if (res != -1) return res;
	res = 0;
	if (val+nums[pos] <= 20) res += getExpr(pos+1, val+nums[pos]);
	if (val-nums[pos] >= 0) res += getExpr(pos+1, val-nums[pos]);
	return res;
}

int main() {
	cin>>n;
	nums.resize(n);
	for (auto& i : nums) cin>>i;
	memset(dp,-1,sizeof dp);
	cout << getExpr(1,nums.front()) << endl;
	return 0;
}