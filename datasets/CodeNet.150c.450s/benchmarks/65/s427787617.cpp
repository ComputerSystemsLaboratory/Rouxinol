#include <iostream>
#include <string.h>

using namespace std;

static const int MAX = 36;

class card {
public:
	char name[2];
	int value;
};

void bubbleSort(card* p, int n);
void selectionSort(card* p, int n);

int main() {
	int n,i,flag;
	card A[MAX], B[MAX];

	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> A[i].name;
		A[i].value = A[i].name[1] - '0';
		B[i] = A[i];
	}

	bubbleSort(A, n);
	cout << "Stable" << endl;

	selectionSort(B, n);

	flag = 0;
	for (i = 0; i < n; i++) {
		if (strncmp(A[i].name, B[i].name, 2) == 0)
			continue;
		else {
			flag = 1;
			break;
		}
	}

	if (flag == 0)
		cout << "Stable" << endl;
	else
		cout << "Not stable" << endl;

	return 0;
}

void bubbleSort(card* p, int n) {
	int i, j;
	card temp;

	//bubble sort
	for (i = 0; i < n; i++) {
		for (j = n - 1; j > i; j--) {
			if (p[j].value < p[j - 1].value) {
				temp = p[j - 1];
				p[j - 1] = p[j];
				p[j]= temp;
			}
		}
	}

	//print array
	cout << p[0].name;
	for (i = 1; i < n; i++)
		cout << ' ' << p[i].name;
	cout << endl;
}

//selectionSort
void selectionSort(card* p, int n) {
	int i,j,min,max, idx;
	card temp, A[MAX];

	//selection sort
	for (i = 0; i < n; i++) {
		min = p[i].value;
		idx = i;
		for (j = i + 1; j < n; j++) {
			if (min > p[j].value) {
				min = p[j].value;
				idx = j;
			}
		}
		if (i != idx) {
			temp = p[i];
			p[i] = p[idx];
			p[idx] = temp;
		}
	}

	//print array
	cout << p[0].name;
	for (i = 1; i < n; i++)
		cout << ' ' << p[i].name;
	cout << endl;
}