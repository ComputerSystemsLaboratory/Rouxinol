#include <stdio.h>
#include <math.h>

#define M_PI 3.141592653589793

struct score {
	int mid;
	int fin;
	int ext;
};

int main(void) {

	int i, j, k, n;
	int num = 0;
	int sum;

	struct score student[10000];

	while (1) {
		scanf("%d %d %d", &student[num].mid, &student[num].fin, &student[num].ext);
		if (student[num].mid == -1 && student[num].fin == -1 && student[num].ext == -1) {
			break;
		}
		num++;
	}

	for (i = 0; i < num; i++) {
		if (student[i].mid == -1 || student[i].fin == -1) {
			printf("F\n");
			continue;
		}
		sum = student[i].mid + student[i].fin;
		if (sum >= 80)			printf("A\n");
		else if (sum >= 65)		printf("B\n");
		else if (sum >= 50)		printf("C\n");
		else if (sum >= 30) {
			if (student[i].ext >= 50)		printf("C\n");
			else							printf("D\n");
		}
		else					printf("F\n");
	}

	return 0;

}