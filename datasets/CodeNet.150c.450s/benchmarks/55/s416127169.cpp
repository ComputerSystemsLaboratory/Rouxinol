#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<cctype>

int main()
{
	char x[1001] = { 0 };
	int sum = 0;
	
	while (1) {
		sum = 0;
		scanf("%s", &x);
		for (int i = 0; x[i]!=0; i++) {
			sum += x[i] - '0';
		}
		
		if (sum == 0) {
			break;
		}
		else {
			printf("%d\n", sum);
		}
	}
	
	return 0;
}