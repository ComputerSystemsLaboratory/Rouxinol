#include <iostream>
using namespace std;
void partialSum(int& c, int i, int k, int n, int s, int sum)
{
	if (k == n && s == sum){
		++c;
		return;
	}
	if (i > 9 || k > n || sum > s)
		return;

	partialSum(c, i + 1, k, n, s, sum);
	partialSum(c, i + 1, k + 1, n, s, sum + i);
}
int main()
{
	int n, s, c, i, k, sum;
	while (cin >> n >> s){
		if (0 == s && 0 == n) break;
		c = i = k = sum = 0;
		partialSum(c, i, k, n, s, sum);
		cout << c << "\n";
	}
	return 0;
}