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
		int c = getchar_unlocked(), e, t = 1;
		while (getchar_unlocked() != ' ')
			;
		while ((e = getchar_unlocked()) != '\n') {
			t <<= 2;
			switch(e) {
			case 'A': t += 0; break;
			case 'C': t += 1; break;
			case 'G': t += 2; break;
			case 'T': t += 3; break;
			}
		}
		switch(c) {
		case 'i': d[t] = true; break;
		case 'f': puts(d[t] ? "yes" : "no");
		}
	}
}
