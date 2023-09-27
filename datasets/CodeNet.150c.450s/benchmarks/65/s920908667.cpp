#include <vector>
#include <utility>
#include <iostream>
#include <algorithm>
using namespace std;
using deck = vector< pair<char,int> >;
using size = vector< pair<char,int> >::size_type;

void bubble_sort(deck &d) {
	for (size i = 0;i != d.size();++i) {
		for (size j = d.size()-1;j != i;--j) {
			if (d[j].second < d[j-1].second) {
				swap(d[j],d[j-1]);
			}
		}
	}
}

bool selection_sort(deck &d) {
	bool stable = true; // default to stable
	for (size i = 0;i != d.size()-1;++i) {
		size same_value_pos = i;
		size min_i = i;
		for (size j = i+1;j != d.size();++j) {
			if (d[j].second < d[min_i].second) {
				min_i = j;
			}
			if (d[j].second == d[i].second) {
				same_value_pos = j;
			}
		}
		if (min_i != i) {
			swap(d[min_i],d[i]);
		}
		if (same_value_pos != i && min_i > same_value_pos) {
			stable = false;
		}
	}
	return stable;
}

int main(void) {
	int n;
	cin >> n;
	deck deck_1 = deck(n);
	// read cards
	for (auto itr = deck_1.begin();itr != deck_1.end();++itr) {
		cin >> itr->first >> itr->second;
	}
	deck deck_2 = deck(deck_1);
	// bubble sort and output
	bubble_sort(deck_1);
	for (size i = 0;i != deck_1.size();++i) {
		cout << deck_1[i].first << deck_1[i].second << (i == deck_1.size()-1 ? "\n" : " ");
	}
	cout << "Stable" << endl; // bubble sort must be stable
	// selection sort and output
	bool stable = selection_sort(deck_2);
	for (size i = 0;i != deck_2.size();++i) {
		cout << deck_2[i].first << deck_2[i].second << (i == deck_2.size()-1 ? "\n" : " ");
	}
	cout << (stable ? "Stable" : "Not stable") << endl;
	return 0;
}