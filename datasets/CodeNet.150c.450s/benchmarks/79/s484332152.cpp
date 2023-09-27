#include <iostream>
#include <deque>
using namespace std;

int main()
{
	int n, r;
	while (cin >> n >> r, n + r)
	{
		deque<int> ary;
		for (int i = 1; i <= n; i++) ary.push_front(i);

		while (r--)
		{
			int p, c;
			cin >> p >> c;
			int i = p + c - 2;
			while (c--)
			{
				int tmp = ary[i];
				ary.erase(ary.begin() + i);
				ary.push_front(tmp);
			}
		}

		cout << ary.front() << endl;
	}

	return 0;
}