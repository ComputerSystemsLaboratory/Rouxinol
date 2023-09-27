#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int main(void)
{
	int n;
	pair <char, int> input[128], bubble[128], select[128];

	cin >> n;

	for (int i = 0; i < n; i++){
		cin >> input[i].first >> input[i].second;
		bubble[i] = input[i];
		select[i] = input[i];
	}

	// bubble
	bool flag = true;
	for (int i = 0; flag; i++){
		flag = false;
		for (int j = n - 1; j >= i + 1; j--){
			if (bubble[j].second < bubble[j - 1].second){
				swap(bubble[j], bubble[j - 1]);
				flag = true;
			}
		}
	}

	// select
	for (int i = 0; i < n - 1; i++){
		int mini = i;
		for (int j = i; j < n; j++){
			if (select[mini].second > select[j].second) mini = j;
		}
		if (mini != i){
			swap(select[mini], select[i]);
		}
	}

	for (int i = 0; i < n; i++){
		cout << bubble[i].first << bubble[i].second << (i + 1 == n ? '\n' : ' ');
	}
	cout << "Stable" << endl;

	bool stable = true;
	for (int i = 0; i < n; i++){
		if (bubble[i] != select[i]) stable = false;
	}

	for (int i = 0; i < n; i++){
		cout << select[i].first << select[i].second << (i + 1 == n ? '\n' : ' ');
	}

	if (stable) cout << "Stable" << endl;
	else cout << "Not stable" << endl;


	return 0;
}