#include <iostream>

using namespace std;

void change(int deck[], int s, int e) {
	int t[50];
	for (int i = 0; i < e; i++) {
		t[i] = deck[i];
	}
	for (int i = 0; i < s; i++) {
		deck[i - s + e] = t[i];
	}
	for (int i = 0; i < e - s; i++) {
		deck[i] = t[i + s];
	}
}

int main()
{
	int deck[50];
	int n, r, s, e;
	while (true) {
		cin >> n >> r;
		if (n == 0 && r == 0) break;
//		cout << n << r << endl;
		for (int i = 0; i < 50; i++) deck[i] = n - i - 1;
		for (int i = 0; i < r; i++) {
			cin >> s >> e;
			change(deck, s - 1, e + s - 1);
		}
		cout << deck[0] + 1 << endl;
	}
	return 0;
}
