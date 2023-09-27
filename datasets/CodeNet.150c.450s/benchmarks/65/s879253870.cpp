#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

int main() {
	int n; cin >> n;
	string tmp;
	vector<string> deck, copy;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		deck.emplace_back(tmp);
	}copy = deck;
	for (int i = 0; i < deck.size(); i++) {
		for (int j = deck.size()-1; j > i; j--) {
			if (deck[j][1] < deck[j - 1][1])swap(deck[j], deck[j - 1]);
		}
	}
	for (int i = 0; i < copy.size(); i++) {
		int mini = i;
		for (int j = i; j < copy.size(); j++) {
			if (copy[j][1] < copy[mini][1])mini = j;
		}
		swap(copy[i], copy[mini]);
	}
	for (int i = 0; i < deck.size() - 1; i++) {
		cout << deck[i] << " ";
	}cout << deck[deck.size() - 1] << endl;
	cout << "Stable" << endl;
	for (int j = 0; j < copy.size() - 1; j++) {
		cout << copy[j] << " ";
	}cout << copy[copy.size() - 1] << endl;
	if (copy == deck)cout << "Stable" << endl;
	else cout << "Not stable" << endl;
}