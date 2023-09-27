#include<string>
#include<iostream>
#include<cctype>
#include<cstdio>
using namespace std;

int main() {
	string s[10000],w;
	int n;
	int sum= 0;

	cin >> w;
	n = w.length();

	for (int i = 0; i < n; i++) {
		if (isalpha(w[i])) {
			if (isupper(w[i])) w[i] = tolower(w[i]);
		}
	}
	
	//Debug
	/*for (int i = 0; i <= n; i++) {
		cout << w[i];
	}
	cout << endl;
	*/

	//input
	int i = 0,nw;
	while (1) {
		cin >> s[i];
		if (s[i] == "END_OF_TEXT") {
			nw = i;
			break;
		}
		i++;
	}
	i = 0;

	//tolower
	for (int i = 0; i < nw; i++) {
		int a = s[i].length();
		for (int j = 0; j < a; j++) {
			char s0 = s[i][j];
			if (isalpha(s0)) {
				if (isupper(s0)) s[i][j] = tolower(s0);
			}
		}
	}

	//Debug
	/*
	for (int i = 0; i < nw; i++) {
		cout << s[i] << endl;
	}
	*/

	//count
	for (int i = 0; i < nw; i++) {
		if (w == s[i]) sum++;
	}

	cout << sum << endl;
	return 0;
}