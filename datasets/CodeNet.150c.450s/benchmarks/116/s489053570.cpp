#include <iostream>
#include <vector>

using namespace std;

vector<int> s;
int n, k;

int get_sum(int left, int right)
{
	return s.at(right) - s.at(left);
}

void get_ans(void)
{
	vector<int> a(n);
	for (int i = 0; i < n; i++)cin >> a.at(i);
	s = vector<int>(n + 1, 0);
	for (int i = 0; i < n; i++)s.at(i + 1) = s.at(i) + a.at(i);
	int ans = get_sum(0, k);
	int tmp;
	for (int i = 1; i < n; i++)
	{
		if (k + i == n)break;
		tmp = get_sum(i, k + i);
		if (tmp > ans)ans = tmp;
	}
	cout << ans << endl;
}

int main(void)
{
	while (1)
	{
		cin >> n >> k;
		if (n == 0 && k == 0)break;
		get_ans();
	}
	return 0;
}
