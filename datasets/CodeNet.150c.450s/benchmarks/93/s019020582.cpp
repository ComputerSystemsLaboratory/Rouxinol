#include <cstdio>
#define N_MAX 100000
#define V_MAX 2000000000

int n;

struct Card {
	char mark;
	int value;
};

Card A[N_MAX], T[N_MAX], A1[(N_MAX/2)+1], A2[(N_MAX/2)+1];

void swapCard(int ia, int ib) {
	Card temp;
	temp = A[ia];
	A[ia] = A[ib];
	A[ib] = temp;
}

void printCard() {
	for (int i = 0; i < n; i++) printf("%s %d\n", &A[i].mark, A[i].value);
}

int partition(int l, int r) {
	int j = l;
	int x = A[r].value;
	for (int i = l; i < r; i++) {
		if (A[i].value <= x) {
			swapCard(i, j);
			j++;
		}
	}
	swapCard(j, r);
	return j;
}

void quickSort(int l, int r) {
	if (l < r) {
		int m = partition(l, r);
		quickSort(l, m - 1);
		quickSort(m + 1, r);
	}
}

void merge(int l, int m, int r) {
	int n1 = m - l;
	int n2 = r - m;
	for (int i = 0; i < n1; i++) A1[i] = T[l + i];
	for (int i = 0; i < n2; i++) A2[i] = T[m + i];
	A1[n1].value = A2[n2].value = V_MAX;
	int j1 = 0, j2 = 0;
	for (int i = l; i < r; i++) {
		if (A1[j1].value <= A2[j2].value) {
			T[i] = A1[j1++];
		}
		else {
			T[i] = A2[j2++];
		}
	}
}

void mergeSort(int l, int r) {
	int m;
	if (l + 1 < r) {
		m = (l + r) / 2;
		mergeSort(l, m);
		mergeSort(m, r);
		merge(l, m, r);
	}
}

int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s %d", &A[i].mark, &A[i].value);
		T[i] = A[i];
	}

	quickSort(0, n - 1);
	mergeSort(0, n);

	bool stable = true;
	for (int i = 0; i < n; i++) {
		if ((A[i].mark != T[i].mark) || (A[i].value != T[i].value)) stable = false;
	}

	if (stable) printf("Stable\n");
	else printf("Not stable\n");

	printCard();

	return 0;
}
