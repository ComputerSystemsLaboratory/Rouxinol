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
	void rotate(int a, int b);
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

void dice::rotate(int a, int b) {
	while (state[2] != b) {
		move('N');
		if (state[2] == b) break;
		move('N');
		if (state[2] == b) break;
		move('N');
		if (state[2] == b) break;
		move('W');
		move('S');
		if (state[2] == b) break;
		move('S');
		move('S');
	}
	while (state[1] != a){
		move('E');
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

	int q;
	int a[24], b[24];
	cin >> q;
	for (int i = 0; i < q; i++) {
		cin >> a[i] >> b[i];
	}

	for (int i = 0; i < q; i++) {
		dice.rotate(a[i], b[i]);
		cout << dice.state[3] << endl;
	}
}