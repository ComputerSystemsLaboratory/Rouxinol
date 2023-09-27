#include <cstdio>
#include <vector>
using namespace std;

typedef vector<int> v;
typedef v::iterator vi;

v L;

long msc(vi l, vi r)
{
	long c = 0;
	if (l + 1 < r) {
		vi m = l + (r - l) / 2;
		c = msc(l, m) + msc(m, r);

		vi cend = L.begin() + (m - l);
		copy(l, m, L.begin());
		vi cp = L.begin();

		vi i = l;
		for (; cp != cend && m != r; i++)
			if(*cp < *m)
				*i = *cp++;
			else
				*i = *m, c += m++ - i;

		copy(cp, cend, i);
	}
	return c;
}

static inline int in()
{
    int c, n = 0;
    while ((c = getchar_unlocked()) >= '0' && c <= '9')
		n = 10 * n + (c - '0');
    return n;
}

int main()
{
	int	n = in();

	v a(n);
	L = v(n);

	for (int &x: a)
		x = in();

	printf("%ld\n", msc(a.begin(), a.end()));
}

