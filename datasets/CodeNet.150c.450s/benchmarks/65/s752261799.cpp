#include<iostream>
using namespace std;
void selectionSort();
void bubbleSort();

struct card {
	int value;
	char mark;
};

void write(card[]);
bool isStable(card[]);
int n;
card c[40],c1[40],c2[40];

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> c[i].mark >> c[i].value;
	}
	for (int i = 0; i < n; i++) {
		c1[i] = c2[i] = c[i];
	}

	bubbleSort();
	selectionSort();
	write(c1);
	if (isStable(c1)) cout << "Stable" << endl;
	else cout << "Not stable" << endl;

	write(c2);
	if (isStable(c2)) cout << "Stable" << endl;
	else cout << "Not stable" << endl;
	return 0;
}

void selectionSort() {
	for (int i = 0; i < n; i++) {
		int minj = i;
		for (int j = i; j <= n - 1; j++) {
			if (c2[j].value < c2[minj].value) {
				minj = j;
			}
		}
		if (i != minj) {
			card copy = c2[i];
			c2[i] = c2[minj];
			c2[minj] = copy;
		}
	}
}

void bubbleSort() {
	bool flag = true;
	while (flag) {
		flag = false;
		for (int i = n - 1; i >= 1; i--) {
			if (c1[i - 1].value > c1[i].value) {
				card copy = c1[i];
				c1[i] = c1[i - 1];
				c1[i - 1] = copy;
				flag = true;
			}
		}
	}
}
void write(card x[]) {
	for (int i = 0; i < n; i++) {
		cout << x[i].mark << x[i].value;
		if (i == n - 1) cout << endl;
		else cout << " ";
	}
}

bool isStable(card x[]) {
	bool isStable = true;
	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++) {
			if (x[i].value == x[j].value) {
				for (int k = 0; k < n; k++) {
					if (x[i].mark == c[k].mark && x[i].value == c[k].value) break;
					else if (x[j].mark == c[k].mark && x[j].value == c[k].value) {
						//cerr << "i:" << i << " j:" << j << " k:" << k << endl;
						return false;
					}
				}
			}
		}
	}
	return true;
}