#include <cstdio>
#include <array>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	getchar_unlocked();

	bool *d = new bool[10000000];

	while (n--) {
		long c = getchar_unlocked(), e;
		long t = 1;
		while (getchar_unlocked() != ' ')
			;
		while ((e = getchar_unlocked()) != '\n') {
			t <<= 2;
			t += (e == 'A' ? 0 : e == 'C'? 1 : e == 'G'? 2 : 3);
		}
		switch(c) {
		case 'i':
			d[t] = true; break;
		case 'f':
			puts(d[t] ? "yes" : "no");
		}
	}
}

