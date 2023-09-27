#include <cstdio>
#include <iostream>

using namespace std;

typedef struct {
	char suit;
	char value;
} CARD;

void bubble(CARD *c1, int n);
void selection(CARD *c2, int n);
bool isStable(CARD *c1, CARD *c2, int n);
void print(CARD *array, int n);

int main()
{
	CARD c1[100], c2[100];
	int n;
	
	scanf("%d", &n);

	for (int i = 0; i < n; i++){
		cin >> c1[i].suit >> c1[i].value;
	}

	for (int i = 0; i < n; i++){
		c2[i] = c1[i];
	}

	bubble(c1, n);
	selection(c2, n);

	print(c1, n);
	cout << "Stable" << endl; // ???????????????????????????

	print(c2, n);
	if (isStable(c1, c2, n)){
		cout << "Stable" << endl;
	}
	else {
		cout << "Not stable" << endl;
	}

	return (0);
}

void bubble(CARD *c1, int n)
{
	CARD tmp;

	for (int i = 0; i < n; i++){
		for (int j = n - 1; j >= i; j--){
			if (c1[j].value < c1[j - 1].value){
				tmp = c1[j];
				c1[j] = c1[j - 1];
				c1[j - 1] = tmp;
			}
		}
	}
}

void selection(CARD *c2, int n)
{
	CARD tmp;

	for (int i = 0; i < n; i++){
		int minj = i;
		for (int j = i; j < n; j++){
			if (c2[j].value < c2[minj].value){
				minj = j;
			}
		}
		tmp = c2[i];
		c2[i] = c2[minj];
		c2[minj] = tmp;
	}
}

void print(CARD *a, int n)
{
	for (int i = 0; i < n; i++){
		if (i == n - 1){
			cout << a[i].suit << a[i].value << endl;
		}
		else {
			cout << a[i].suit << a[i].value << " ";
		}
	}
}

bool isStable(CARD *c1, CARD *c2, int n)
{
	for (int i = 0; i < n; i++){
		if (c1[i].suit != c2[i].suit){
			return (false);
		}
	}

	return (true);
}