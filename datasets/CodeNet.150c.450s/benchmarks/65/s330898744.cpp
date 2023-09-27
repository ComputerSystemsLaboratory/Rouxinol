#include <iostream>
#include <string>
#define N 36

using namespace std;

int main(void) {
	int hash[10] = {0}, hashB[10] = {0}, hashS[10] = {0};
	char suit[N], suitB[N], suitS[N];
	int value[N], valueB[N], valueS[N];
	int n;
	bool stableB = true, stableS = true;

	cin >> n;
	for(int i = 0; i < n; ++i) {
		string tmp;
		cin >> tmp;
		suit[i] = tmp[0];
		value[i] = tmp[1] - '0';

		suitB[i] = suitS[i] = suit[i];
		valueB[i] = valueS[i] = value[i];

		int d_hash = 0;
		switch(suit[i]) {
			case 'S':
				d_hash = 1;
				break;
			case 'H':
				d_hash = 2;
				break;
			case 'C':
				d_hash = 3;
				break;
			case 'D':
				d_hash = 4;
				break;
		}
		hash[value[i]] = hash[value[i]] * 10 + d_hash;
	}

	// bubble
	for(int i = 0; i < n; ++i) {
		for(int j = n-1; j > i; --j) {
			if(valueB[j] < valueB[j-1]) {
				char ch = suitB[j];
				int tmp = valueB[j];
				suitB[j] = suitB[j-1];
				valueB[j] = valueB[j-1];
				suitB[j-1] = ch;
				valueB[j-1] = tmp;
			}
		}
	}

	for(int i = 0; i < n; ++i) {
		if(i != 0) {
			cout << ' ';
		}
		cout << suitB[i] << valueB[i];
	}
	cout << endl;

	for(int i = 0; i < n; ++i) {
		int d_hash = 0;
		switch(suitB[i]) {
			case 'S':
				d_hash = 1;
				break;
			case 'H':
				d_hash = 2;
				break;
			case 'C':
				d_hash = 3;
				break;
			case 'D':
				d_hash = 4;
				break;
		}
		hashB[valueB[i]] = hashB[valueB[i]] * 10 + d_hash;
	}

	for(int i = 1; i <= 9; ++i) {
		if(hash[i] != hashB[i]) {
			stableB = false;
			break;
		}
	}

	if(stableB) {
		cout << "Stable" << endl;
	} else {
		cout << "Not stable" << endl;
	}

	// selection
	for(int i = 0; i < n; ++i) {
		int mini = i;
		for(int j = i; j < n; ++j) {
			if(valueS[j] < valueS[mini]) {
				mini = j;
			}
		}
		if(mini != i) {
			char ch = suitS[i];
			int tmp = valueS[i];
			suitS[i] = suitS[mini];
			valueS[i] = valueS[mini];
			suitS[mini] = ch;
			valueS[mini] = tmp;
		}
	}

	for(int i = 0; i < n; ++i) {
		if(i != 0) {
			cout << ' ';
		}
		cout << suitS[i] << valueS[i];
	}
	cout << endl;

	for(int i = 0; i < n; ++i) {
		int d_hash = 0;
		switch(suitS[i]) {
			case 'S':
				d_hash = 1;
				break;
			case 'H':
				d_hash = 2;
				break;
			case 'C':
				d_hash = 3;
				break;
			case 'D':
				d_hash = 4;
				break;
		}
		hashS[valueS[i]] = hashS[valueS[i]] * 10 + d_hash;
	}

	for(int i = 1; i <= 9; ++i) {
		if(hash[i] != hashS[i]) {
			stableS = false;
			break;
		}
	}

	if(stableS) {
		cout << "Stable" << endl;
	} else {
		cout << "Not stable" << endl;
	}

	return 0;
}