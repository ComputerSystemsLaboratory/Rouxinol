#include <cstdio>

int main()
{
	int a, b, c, d, e = 0;
	scanf("%d %d %d", &a, &b, &c);

	for(int i = 1; i <= c; i++){
		d = c % i;
		if(d == 0 && i >= a && i <= b) e++;
	}
	printf("%d\n", e);
	return 0;
}