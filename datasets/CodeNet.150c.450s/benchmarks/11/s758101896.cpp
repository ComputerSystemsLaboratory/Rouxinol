#include <cstdio>
using namespace std;

int check(int data[], char key)
{
	int i;

	for (i=1; i<=13; i++){
		if (data[i] == 0)
			printf("%c %d\n", key, i);
	}
	return 0;
}

int main (void)
{
	int s[14]={0}, h[14]={0}, c[14]={0}, d[14]={0};
	int j, i, n, p=0, t=0, b=0, y=0;
	char k, x='S', e='H', q='C', o='D';

	scanf("%d", &n);

	for (i=1; i<=n; i++){
		scanf(" %c %d", &k, &p);
		if (k == 'S')
			s[p] = p;
		else if (k == 'H')
			h[p] = p;
		else if (k == 'C')
			c[p] = p;
		else
			d[p] = p;
	}


	check(s, x);
	check(h, e);
	check(c, q);
	check(d, o);

	return 0;
}