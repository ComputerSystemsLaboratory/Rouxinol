#include <iostream>

#include <vector>

#include <algorithm>

#include <sstream>

#include <string>

#include <cmath>

#include <list>

#include <set>
#include <cstdlib>
using namespace std;

int in() {int x; cin >> x; return x;}

template <typename T> class SegTree

{

public:

	int n;

	T T_max;

	vector<T> dat;

	SegTree(int n_, T t_max)

	{

		int n = 1;

		T_max = t_max;

		while (n < n_)n *= 2;

		for (int i = 0; i < 2 * n - 1; i++)dat.push_back(t_max);

	}

	void update(int k, T a)

	{

		k += n - 1;

		dat[k] = a;

		while (k > 0)

		{

			k = (k - 1) / 2;

			dat[k] = min(dat[k * 2 + 1], dat[k * 2 + 2]);

		}

	}



	//[a,b)

	T query(int a, int b)

	{

		return _query(a, b, 0, 0, n);

	}



private:

	T _query(int a, int b, int k, int l, int r)

	{

		if (r <= a || b <= l)return T_max;

		if (a <= l && r <= b)return dat[k];

		else

		{

			T vl = _query(a, b, k * 2 + 1, l, (l + r) / 2);

			T vr = _query(a, b, k * 2 + 2, (l + r) / 2, r);

			return min(vr, vl);

		}

	}

};


int main()
{
	int n;
	while (cin >> n && n)
	{
		vector<long long> a; a.push_back(0);
		long long ans = -999999999999;
		for (long long i = 0; i < n; i++)
		{
			a.push_back(in());
		}

		for (long long i = 1; i < n + 1; i++)
		{
			a[i] += a[i - 1];
		}

		for (long long l = 0; l < n + 1; l++)
		{
			for (long long r = l + 1; r < n + 1; r++)
			{
				ans = max(ans, a[r] - a[l]);
			}
		}
		cout << ans << endl;


	}
}