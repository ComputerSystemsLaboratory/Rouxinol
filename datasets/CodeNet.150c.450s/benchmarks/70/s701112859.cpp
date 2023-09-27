#include <stdio.h>

int main()
{
	int month, day, n;
	int md[12] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30,  31, 30};

	while (1) {
		scanf("%d %d", &month, &day);

		if (month == 0) break;
		n = 0;

		for (int i = 0; i < month; i++) {
			n += md[i];
		}
		n += day;

		switch (n%7) {
			case 0: printf("Wednesday\n"); break;
			case 1: printf("Thursday\n"); break;
			case 2: printf("Friday\n"); break;
			case 3: printf("Saturday\n"); break;
			case 4: printf("Sunday\n"); break;
			case 5: printf("Monday\n"); break;
			case 6: printf("Tuesday\n"); break;
		}
	}

	return 0;
}