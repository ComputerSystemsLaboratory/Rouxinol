#include <iostream>
#include <string>
#include <vector>


using namespace std;

int min(int a, int b) { return(a < b) ? a : b; }

class Solution
{
public:
	int minDistance(const string &word1, const string &word2)
	{
		const size_t m = word1.size() + 1;
		const size_t n = word2.size() + 1;

		vector<vector<int> > k(m, vector<int>(n));

		for (size_t i = 0; i < m; ++i)
			k[i][0] = i;

		for (size_t j = 0; j < n; ++j)
			k[0][j] = j;

		for (size_t i = 1; i < m; ++i)
		{
			for (size_t j = 1; j < n; ++j)
			{
				if (word1[i - 1] == word2[j - 1])
					k[i][j] = k[i - 1][j - 1];
				else
					k[i][j] = min(k[i - 1][j - 1], min(k[i - 1][j], k[i][j - 1])) + 1;
			}
		}
		return k[m - 1][n - 1];
	}
};

int main() {
	string a, b;
	cin >> a >> b;
	Solution A;
	cout << A.minDistance(a, b) << endl;
}