#include<iostream>
#include<cstdio>
#include<list>
#include<vector>
using namespace std;

int main() {
	int a, b;
	while (cin >> a >> b, a | b) {
		int temoti[50]{}, ba = b;
		for (int i = 0;; i++) {
			if (ba) {
				ba--;
				temoti[i%a]++;
				if (temoti[i%a] == b) { cout << i % a << endl; break; }
			}
			else {
				ba = temoti[i%a];
				temoti[i%a] = 0;
			}
		}
	}
}