#include <stdio.h>
#include <iostream>
#include <string.h>
#include <utility>
using namespace std;

typedef struct {
	char mark;
	int num;
} TRUMP;

void bubbleSort(TRUMP a[], int n);
void selectionSort(TRUMP a[], int n);
void dispTrumpList(const TRUMP trump[], int n);
bool isStable(const TRUMP t1[], const TRUMP t2[], int n);

int main(void)
{	
	int n;
	cin >> n;
	
	TRUMP trump[36], trump1[36], trump2[36];
	for (int i = 0; i < n; i++) {
		cin >> trump[i].mark >> trump[i].num;
		trump1[i].mark = trump[i].mark;
		trump1[i].num = trump[i].num;
		trump2[i].mark = trump[i].mark;
		trump2[i].num = trump[i].num;
	}
	//memcpy(trump1, trump, sizeof(trump) * n);
	//memcpy(trump2, trump, sizeof(trump) * n);
	
	bubbleSort(trump1, n);
	dispTrumpList(trump1, n);
	if (isStable(trump, trump1, n)) cout << "Stable" << endl;
	else cout << "Not stable" << endl;
	
	selectionSort(trump2, n);
	dispTrumpList(trump2, n);
	if (isStable(trump, trump2, n)) cout << "Stable" << endl;
	else cout << "Not stable" << endl;
	
	return 0;
}

void bubbleSort(TRUMP a[], int n)
{
	for (int i = 0; i < n; i++) {
		for (int j = n - 1; j > i; j--) {
			if (a[j].num < a[j-1].num) {
				swap(a[j], a[j-1]);
			}
		}
	}
}

void selectionSort(TRUMP a[], int n)
{
	int i, j;
	for (i = 0; i < n; i++) {
		int minj = i;
		for (j = i; j < n; j++) {
			if (a[j].num < a[minj].num) {
				minj = j;
			}
		}
		swap(a[i], a[minj]);
	}
}

void dispTrumpList(const TRUMP trump[], int n)
{
	for (int i = 0; i < n; i++) {
		cout << trump[i].mark << trump[i].num;
		if (i < n - 1) cout << " ";
		else cout << endl;
	}
}

bool isStable(const TRUMP t1[], const TRUMP t2[], int n)
{
	char m1[9][4] = {"\0"};
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 4; j++) {
			if (m1[t1[i].num-1][j] == '\0') {
				m1[t1[i].num-1][j] = t1[i].mark;
				break;
			}
		}
	}
	
	char m2[9][4] = {"\0"};
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 4; j++) {
			if (m2[t2[i].num-1][j] == '\0') {
				m2[t2[i].num-1][j] = t2[i].mark;
				break;
			}
		}
	}
	
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 4; j++) {
			if (m1[i][j] != m2[i][j]) return false;
		}
	}
	return true;
}