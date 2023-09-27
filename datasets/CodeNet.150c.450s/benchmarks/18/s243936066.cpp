#include "stdio.h"

#define DEBT 100000
#define INTEREST 5

int main()
{
	int n, m1;
	double debt, interest;

	debt = DEBT;
	interest = 1 + INTEREST/100.0;

	scanf("%d", &n);

	if (n > 100) return 0;

	for (int i = 0; i < n; i++){
		debt = (int)(debt * interest);

		if ((int)debt%1000 > 0) debt += 1000;
		debt -= (int)debt % 1000;
	}

	printf("%d\n", (int)debt);
}