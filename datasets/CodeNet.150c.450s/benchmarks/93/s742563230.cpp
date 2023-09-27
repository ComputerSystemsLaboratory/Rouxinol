#include <climits>
#include <iostream>
#include <iterator>
#include <queue>
#include <utility>
#include <vector>
using namespace std;

void mergeSort(vector<pair<char, int>>::iterator a, vector<pair<char, int>>::iterator b) {
	if (b > next(a)) {
		mergeSort(a, next(a, (b - a) / 2));
		mergeSort(next(a, (b - a) / 2), b);
		queue<pair<char, int>> c, d;
		for (vector<pair<char, int>>::iterator i = a; i != next(a, (b - a) / 2); ++i) c.push(*i);
		c.emplace(0, INT_MAX);
		for (vector<pair<char, int>>::iterator i = next(a, (b - a) / 2); i != b; ++i) d.push(*i);
		d.emplace(0, INT_MAX);
		for (vector<pair<char, int>>::iterator i = a; i != b; ++i) {
			if (c.front().second <= d.front().second) {
				*i = c.front();
				c.pop();
			}
			else {
				*i = d.front();
				d.pop();
			}
		}
	}
}

void quickSort(vector<pair<char, int>>::iterator a, vector<pair<char, int>>::iterator b) {
	if (a < b) {
		vector<pair<char, int>>::iterator i = a;
		for (vector<pair<char, int>>::iterator j = a; j != prev(b); ++j) {
			if (prev(b)->second >= j->second) {
				swap(*i, *j);
				++i;
			}
		}
		swap(*i, *prev(b));
		quickSort(a, i);
		quickSort(next(i), b);
	}
}

int main() {
	int n;
	cin >> n;
	vector<pair<char, int>> a(n);
	for (pair<char, int>& i : a) cin >> i.first >> i.second;
	vector<pair<char, int>> b = a;
	mergeSort(a.begin(), a.end());
	quickSort(b.begin(), b.end());
	if (a == b) cout << "Stable";
	else cout << "Not stable";
	cout << endl;
	for (pair<char, int>& i : b) cout << i.first << ' ' << i.second << endl;
}
