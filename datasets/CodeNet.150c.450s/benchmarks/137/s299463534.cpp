#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	getchar_unlocked();

	unordered_set<long> d;

	while (n--) {
		long c = getchar_unlocked();
		long t = 0;
		while (getchar_unlocked() != ' ')
			;
		for (int i = 0, c; (c = getchar_unlocked()) != '\n'; i++)
			t += (c - 'A' + 1) << 3 * i;
		switch(c) {
		case 'i':
			d.insert(t); break;
		case 'f':
			puts((d.find(t) != d.end() ? "yes" : "no"));
		}
	}
}
