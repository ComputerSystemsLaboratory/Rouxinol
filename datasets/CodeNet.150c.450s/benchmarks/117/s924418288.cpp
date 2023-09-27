#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

#define d(s, e) distance(s, e)
typedef vector<int> v;
typedef v::iterator vi;
int c = 0;

void mm(vi l, vi m, vi r)
{
	v L(d(l, m));
	copy(l, m, L.begin());
	vi cp = L.begin();

	for (vi i = l; i != r; i++) {
		if (cp == L.end()) {
			c += d(i, r);
			break;
		} else if (m == r) {
			c += d(i, r);
			copy(cp, L.end(), i);
			break;
		} else if(*cp <= *m)
			*i = *cp, cp++;
		else
			*i = *m, m++;
		c++;
	}


}

void ms(vi l, vi r)
{
	if (l + 1 < r) {
		vi m = l + d(l, r) / 2;
		ms(l, m);
		ms(m, r);
		mm(l, m, r);
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	v S(n);
	for (int &x :S)
		scanf("%d", &x);

	ms(S.begin(), S.end());

	for (int &x: S)
		printf("%s%d", &x == &S[0] ? "": " ", x);
	puts("");
	printf("%d\n", c);
}
