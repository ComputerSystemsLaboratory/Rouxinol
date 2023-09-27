


#if 1
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <stack>
#include <array>
#include <deque>
#include <algorithm>
#include <utility>
#include <cstdint>
#include <functional>
#include <iomanip>
#include <numeric>
#include <assert.h>

auto& in = std::cin;
auto& out = std::cout;

int32_t M;
int32_t V[20];
int32_t dp[20][50002];
int func(int i, int max)
{
	if (max == 0) {
		return 0;
	}
	if (max<0||i >= M) {
		return 500000;
	}
	auto& memo = dp[i][max];
	if (memo != 0) {
		return memo;
	}
	return memo = std::min(func(i + 1, max), func(i, max-V[i])+1);
}
int main()
{
	using std::endl;
	in.sync_with_stdio(false);
	out.sync_with_stdio(false);

	int32_t N;
	in >> N>>M;
	for (int32_t i = 0; i < M; i++)
	{
		in >> V[i];
	}
	std::cout << func(0, N)<<std::endl;
	return 0;
}
#endif