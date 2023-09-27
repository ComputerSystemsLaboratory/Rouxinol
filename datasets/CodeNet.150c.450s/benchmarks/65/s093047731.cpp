#include <iostream>
using namespace std;
#include <algorithm>

pair<char, int> card_b[37];
pair<char, int> card_s[37];

bool stable(int n){

	for (int i = 0; i < n; i++){
		if (card_b[i] != card_s[i])
			return false;
	}
	return true;
}

void bubble(int n){

	for (int i = 0; i < n; i++){
		for (int j = n - 1; j >= i; j--){
			if (card_b[j].second < card_b[j - 1].second)
				swap(card_b[j], card_b[j - 1]);
		}
	}

	for (int i = 0; i < n - 1; i++)
		cout << card_b[i].first << card_b[i].second << ' ';
	cout << card_b[n - 1].first << card_b[n - 1].second << endl << "Stable" << endl;

	return;
}

void selction(int n){

	for (int i = 0; i < n - 1; i++){

		int mini = i;
		for (int j = i; j < n; j++){
			if (card_s[j].second < card_s[mini].second)
				mini = j;
		}

		if (i != mini)
			swap(card_s[i], card_s[mini]);
	}

	for (int i = 0; i < n - 1; i++)
		cout << card_s[i].first << card_s[i].second << ' ';
	cout << card_s[n - 1].first << card_s[n - 1].second << endl;
	if (stable(n)) cout << "Stable" << endl;
	else cout << "Not stable" << endl;

	return;
}

int main(void){

	int n;

	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> card_b[i].first >> card_b[i].second;
		card_s[i] = card_b[i];
	}

	bubble(n);
	selction(n);
}