#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

struct set {
	int h;
	int w;
	int diagonel;
} all[22500];

int suffix = 0;

void InsSort(int n)
{
	int i, j, temp_dia, temp_h, temp_w;

	for (i = 1; i < n; i++) {
		temp_h = all[i].h;
		temp_w = all[i].w;
		temp_dia = all[i].diagonel;
		for (j = i; j > 0; j--) {
			if (all[j - 1].diagonel > temp_dia) {
				all[j].h = all[j - 1].h;
				all[j].w = all[j - 1].w;
				all[j].diagonel = all[j - 1].diagonel;
			}
			else if (all[j - 1].diagonel == temp_dia) {
				if (all[j - 1].h > temp_h) {
					all[j].h = all[j - 1].h;
					all[j].w = all[j - 1].w;
					all[j].diagonel = all[j - 1].diagonel;
				}
				else {
					break;
				}
			}
			else {
				break;
			}
		}

		all[j].h = temp_h;
		all[j].w = temp_w;
		all[j].diagonel = temp_dia;
	}
}

void search() {
	for (int i = 1; i <= 150; i++) {
		for (int j = 1; j <= 150; j++) {
			if (i >= j) {
				continue;
			}

			all[suffix].h = i;
			all[suffix].w = j;
			all[suffix].diagonel = (i * i) + (j * j);

			suffix++;
		}
	}
}

int main() {
	search();
	InsSort(suffix);

	//FILE *fp;
	//fp = fopen("C:\\Users\\owata\\Desktop\\answer1.txt", "w");

	while (1) {
		int h, w, my;

		scanf("%d %d", &h, &w);

		if (h == 0 && w == 0) {
			break;
		}

		my = (h * h) + (w * w);

		for (int i = 0; i < suffix; i++) {
			if (all[i].h == h && all[i].w == w) {
				continue;
			}

			if (all[i].diagonel > my) {
				printf("%d %d\n", all[i].h, all[i].w);
				//fprintf(fp, "%d %d\n", all[i].h, all[i].w);
				break;
			}
			else if (all[i].diagonel == my && h < all[i].h) {
				printf("%d %d\n", all[i].h, all[i].w);
				//fprintf(fp, "%d %d\n", all[i].h, all[i].w);
				break;
			}
		}
	}

	//fclose(fp);

	return 0;
}