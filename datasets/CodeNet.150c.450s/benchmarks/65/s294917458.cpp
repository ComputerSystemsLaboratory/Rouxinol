#include<iostream>
#include<algorithm>
using namespace std;

struct Card {
	char suit;
	int num;
};

void swapc(Card& c1, Card& c2);

int main() {
	Card c1[36], c2[36];
	int i, j, n, mini, tmpn;
	char tmpc, dum;
	bool flag;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin.get(dum);
		cin.get(c1[i].suit);
		cin >> c1[i].num;
	}
	for (i = 0; i < n; i++)c2[i] = c1[i];

	for (i = 0; i < n; i++) {
		for (j = n - 1; j > i; j--) {
			if (c1[j].num < c1[j - 1].num)swap(c1[j], c1[j - 1]);
		}
	}
	
	for (i = 0; i < n; i++) {
		mini = i;
		for (j = i + 1; j < n; j++) {
			if (c2[j].num < c2[mini].num)mini = j;
		}
		swap(c2[i], c2[mini]);
	}

	for (i = 0; i < n; i++) {
		if (c1[i].suit != c2[i].suit || c1[i].num != c2[i].num)break;
	}
	if (i == n)flag = true;
	else flag = false;

	for (i = 0; i < n; i++) {
		cout << c1[i].suit << c1[i].num;
		if (i != n - 1)cout << " ";
	}
	cout << endl << "Stable" << endl;

	for (i = 0; i < n; i++) {
		cout << c2[i].suit << c2[i].num;
		if (i != n - 1)cout << " ";
	}
	cout << endl;
	if (flag == true)cout << "Stable" << endl;
	else cout << "Not stable" << endl;
	
	return 0;
}