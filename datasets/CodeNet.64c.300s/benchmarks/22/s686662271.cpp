#include<stdio.h>
#include<math.h>

void ans(int *a) 
{
	if (*a == 1) {
		printf("YES\n");
	}
	else if (*a == 0) {
		printf("NO\n");
	}
}

int main(void)
{
	int n;
	int i;
	int a, b, c, x;
	int result[1000];
	
	for (i = 0; i < 1000; i++) {
		result[i] = 0;
	}
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		scanf("%d %d %d", &a, &b, &c);
		
		if (a < b) {
			x = a;
			a = b;
			b = x;
		}
		
		if (b < c) {
			x = b;
			b = c;
			c = x;
		}
		
		if (a < b) {
			x = a;
			a = b;
			b = x;
		}
		
		if (a * a == b * b + c * c) {
			result[i]++;
		}
		
	}
	
	for (i = 0; i < n; i++) {
		ans(&result[i]);
	}
	
	return (0);
}