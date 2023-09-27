#include <iostream>
#include <string>
#include <stddef.h>
#include <stack>
#include <queue>
#include <cctype>
#include <stdio.h>
#include <cstdlib>
#include <algorithm>
#include <math.h>
#define ll long long;

using namespace std;

class dice {
public:
	int a[7];
	int state[7];
	void move(char s);
};

void dice::move(char s) {
	int t[7];//??????????????´???
	for (int i = 1; i <= 6; i++) {
		t[i] = state[i];
	}
	if (s == 'N') {
		state[1] = t[2];
		state[2] = t[6];
		state[6] = t[5];
		state[5] = t[1];
	}
	else if (s == 'S') {
		state[1] = t[5];
		state[5] = t[6];
		state[6] = t[2];
		state[2] = t[1];
	}
	else if (s == 'W') {
		state[1] = t[3];
		state[3] = t[6];
		state[6] = t[4];
		state[4] = t[1];
	}
	else {
		state[1] = t[4];
		state[4] = t[6];
		state[6] = t[3];
		state[3] = t[1];
	}
}


int main() {
	
	dice dice{
	};
	string s;

	for (int i = 1; i <= 6; i++) {
		cin >> dice.a[i];
		dice.state[i] = dice.a[i];
	}

	cin >> s;
	int size = s.size();
	for (int i = 0; i < size; i++) {
		dice.move(s[0]);
		s.erase(s.begin());
	}
	
	cout << dice.state[1] << endl;
	
}