#ifndef ___Class_RMQ
#define ___Class_RMQ

#include <vector>
#include <algorithm>

template <typename Type, class Calculate> class RMQ
{
private:

	int size;

	std::vector<Type> value;

	Type _query(int a, int b, int k, int l, int r)
	{
		if (r <= a || b <= l) { return val; }
		if (a <= l && r <= b) { return value[k]; }

		Type vl = _query(a, b, 2 * k, l, (l + r) / 2);
		Type vr = _query(a, b, 2 * k + 1, (l + r) / 2, r);

		return Calculate()(vl, vr);
	}

public:

	Type val;

	RMQ(int size_, int val_) : val(val_)
	{
		for (size = 1; size < size_;) { size <<= 1; }

		value = std::vector<Type>(size * 2, val);
	}

	void update(int i, const Type& x)
	{
		i += size; value[i] += x;

		while (i > 1) { i = i / 2; value[i] = Calculate()(value[2 * i], value[2 * i + 1]); }
	}

	Type query(int s, int t) { return _query(s, t, 1, 0, size); }
};

#endif


// ------ main ------ //

#include <cstdio>
#include <functional>

#pragma warning(disable: 4996)

int n, q, com, x, y;

int main()
{
	scanf("%d", &n);
	scanf("%d", &q);

	RMQ<long long, std::plus<long long> > r(n, 0);

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