#include <cstdio>

int main()
{
	int x;
	int h, m, s;
	scanf("%d", &x);

	if (x < 60){
		h = 0;
		m = 0;
		s = x;
		printf("%d:%d:%d\n", h ,m, s);
	}
	else if (x < 3600){
		h = 0;
		m = x/60;
		s = x%60;
		printf("%d:%d:%d\n", h ,m, s);
	}
	else if (x < 86400){
		h = x/3600;
		m = (x % 3600)/60;
		s = (x % 3600)%60;
		printf("%d:%d:%d\n", h ,m, s);
	}
	return 0;
}