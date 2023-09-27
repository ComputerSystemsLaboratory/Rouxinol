#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <utility>
#include <string>

using namespace std;

void show(vector< pair<char, int> > &a) {
	int n = a.size();
	for (int i = 0; i < n; i++) {
		printf("%c%d%c", a[i].first, a[i].second, i == n - 1 ? '\n' : ' ');
	}
}

void selection_sort(vector< pair<char, int> > &a) {
	int n = a.size();
	int pos;
	for (int i = 0; i < n; i++) {
		pos = i;
		for (int j = i; j < n; j++) {
			if (a[j].second < a[pos].second) {
				pos = j;
			}
		}
		swap(a[i], a[pos]);
	}
}

void bubble_sort(vector< pair<char, int> > &a) {
	int n = a.size();
	bool hasNext = true;
	while (hasNext) {
		hasNext = false;
		for (int i = n - 1; i >= 1; i--) {
			if (a[i].second < a[i - 1].second) {
				swap(a[i], a[i - 1]);
				hasNext = true;
			}
		}
	}
}

void stable_sort(vector< pair<char, int> > &a) {
	auto tmp = a;
	int n = a.size();
	vector<bool> used(n, false);

	for (int i = 0; i < n; i++) {
		int pos = -1;
		for (int j = 0; j < n; j++) {
			if (used[j]) {
				continue;
			}
			if (pos == -1) {
				pos = j;
			}
			if (tmp[j].second < tmp[pos].second) {
				pos = j;
			}
		}
		used[pos] = true;
		a[i] = tmp[pos];
	}
}

int main() {
	int n, num;
	char suit;
	string input;

	cin >> n;
	vector< pair<char, int> > cards(n), sort1, sort2, sort3;
	for (int i = 0; i < n; i++) {
		cin >> input;
		suit = input[0];
		num = input[1] - '0';
		cards[i] = make_pair(suit, num);
	}


	sort1 = sort2 = sort3 = cards;
	bubble_sort(sort1);
	selection_sort(sort2);
	stable_sort(sort3);

	show(sort1);
	printf("%s\n", sort1 == sort3 ? "Stable" : "Not stable");
	show(sort2);
	printf("%s\n", sort2 == sort3 ? "Stable" : "Not stable");

	return 0;
}