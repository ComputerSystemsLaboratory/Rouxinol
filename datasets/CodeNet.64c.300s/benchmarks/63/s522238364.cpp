#include <stdio.h>

int euclid(int a, int b);

int main(void)
{
	int a, b;
	int gcd, lcm;
	
	while (scanf("%d %d", &a, &b) != EOF){
		if (a > b){
			gcd = euclid(a, b);
		}
		else {
			gcd = euclid(b, a);
		}
		
		lcm = a * (b / gcd);
		
		printf("%d %d\n", gcd, lcm);
	}
	
	return (0);
	
}

int euclid(int a, int b)
{
	int c;
	c = a % b;
	
	if (c == 0){
		return (b);
	}
	
	return (euclid(b, c));
}