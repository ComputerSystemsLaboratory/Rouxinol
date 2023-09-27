#include <cstdio>
#include <array>
using namespace std;

typedef array<int, 10001> v;

static inline int in()
{
    int c, n = 0;
    while ((c = getchar_unlocked()) >= '0' && c <= '9')
		n = 10 * n + (c - '0');
    return n;
}

static inline void out(int n)
{
	static char buf[20];
	char *p = buf;
	if (!n)
		*p++ = '0';
	else
		while (n)
			*p++ = n % 10 + '0', n /= 10;
	while (p-- != buf)
		putchar_unlocked(*p);
}

int main()
{
	int n = in(), c = n;

	v b = {};

	while (n--)
		b[in()]++;

	for (int i = 0; c; i++)
		while (b[i]--) {
			out(i);
			if (--c) putchar_unlocked(' ');
		}
	puts("");
}

