#include <iostream>
#include <vector>
#include <algorithm>

class solver
{
public :
	solver(int n, int z, std::vector<int> _v, std::vector<int> _w);
	void solve();

private:
	const int n;
	const int z;
	const std::vector<int> w;
	const std::vector<int> v;
	std::vector<std::vector<int> > dp;
};


solver::solver(int _n, int _z, std::vector<int> _w, std::vector<int> _v) : n(_n), z(_z), w(_w), v(_v) 
{
	dp.resize(n + 1);
	for (int i = 0; i <= n; ++i) dp.at(i).resize(z + 1);
	std::fill(dp.at(n).begin(), dp.at(n).end(), 0);	
}

void solver::solve()
{
	for (int i = n - 1; i >= 0; i--) for (int j = 0; j <= z; j++) {
		if (j < w[i]) dp[i][j] = dp[i + 1][j];
		else dp[i][j] = std::max(dp[i + 1][j], dp[i + 1][j - w[i]] + v[i]);
	}
	std::cout << dp[0][z] << std::endl;
}

int main()
{
	int n; // ???????????°
	int z; // ???????????¶???????????????
	std::vector<int> v;
	std::vector<int> w;

	std::cin >> n >> z;
		
	v.resize(n);
	w.resize(n);

	for (int i = 0; i < n; ++i)
	{
		//std::cin >> v.at(i) >> w.at(i);
		std::cin >> w.at(i) >> v.at(i);
	}

	solver solver(n, z, v, w);
	solver.solve();


	return 0;
	
}