#include <bits/stdc++.h>
using namespace std;
const int C = 1046527;

char baca[C][13];

int hs(int key, int i) {
	return (key % C + i * (1 + key % (C - 1))) % C;
}

int cToI(char ch) {
	if (ch == 'A')
		return 1;
	else if (ch == 'C')
		return 2;
	else if (ch == 'G')
		return 3;
	else if (ch == 'T')
		return 4;
	else
		return 0;
}
int getKey(string tmp) {
	int sum = 0, p = 1, l = tmp.length();
	for (int i = 0; i < l; i++) {
		sum += p * cToI(tmp[i]);
		p *= 5;
	}
	return sum;
}

void ins(string str) {
	int key = getKey(str);
	for (int i = 0; i < C; i++) {
		int h = hs(key, i);
		if (strlen(baca[h]) == 0) {
			strcpy(baca[h], str.c_str());
			break;
		}
	}
}

int find(string str) {
	int key = getKey(str);
	for (int i = 0;; i++) {
		int h = hs(key, i);
		if (strlen(baca[h]) == 0) {
			return 0;
		} else if (strcmp(baca[h], str.c_str()) == 0) {
			return 1;
		}
	}
}

int main() {
	ios::sync_with_stdio(false);

	int cnt;
	cin >> cnt;
	string tmp;
	string key;
	for (int i = 0; i < cnt; i++) {
		cin >> tmp >> key;

		if (tmp[0] == 'i') {
			ins(key);
		} else {
			find(key) == 1 ? cout << "yes" << endl : cout << "no" << endl;
		}
	}

	return 0;
}