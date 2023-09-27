#include <stdio.h>

#define X 600

int main(void)
{
	int y;
	int d;
	int s = 0;
	int i;
	
	while (scanf("%d", &d) != EOF){
		for (i = 0; i < X; i += d){
			s += d * i * i;
		}
		printf("%d\n", s);
		s = 0;
	}
	return 0;
}