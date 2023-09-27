#ifndef ___Class_RSQ
#define ___Class_RSQ

#include <limits>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

template <typename Type> class RSQ
{
private:

	int size;

	vector<Type> sumvalue;

	Type _query(int a, int b, int k, int l, int r)
	{
		if (r <= a || b <= l) { return 0; }
		if (a <= l && r <= b) { return sumvalue[k]; }

		Type vl = _query(a, b, 2 * k, l, (l + r) / 2);
		Type vr = _query(a, b, 2 * k + 1, (l + r) / 2, r);

		return vl + vr;
	}

public:

	RSQ(int size_)
	{
		for (size = 1; size < size_;) { size <<= 1; }

		sumvalue = vector<Type>(size * 2, 0);
	}

	void update(int i, const Type& x)
	{
		i += size;

		sumvalue[i] += x;

		while (i > 1)
		{
			i = i / 2;

			sumvalue[i] = sumvalue[i * 2] + sumvalue[i * 2 + 1];
		}
	}

	Type query(int s, int t)
	{
		return _query(s, t, 1, 0, size);
	}
};

#endif


// ------ main ------ //

#include <cstdio>

#pragma warning(disable: 4996)

using namespace std;

int n, q, com, x, y;

int main()
{
	scanf("%d", &n);
	scanf("%d", &q);

	RSQ<long long> r(n);

	for (int i = 0; i < q; i++)
	{
		scanf("%d", &com);
		scanf("%d", &x);
		scanf("%d", &y);

		if (com == 0)
		{
			r.update(x - 1, y);
		}
		if (com == 1)
		{
			printf("%lld\n", r.query(x - 1, y));
		}
	}

	return 0;
}