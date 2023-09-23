#include<iostream>
using namespace std;
int main() {
	int line[101] = { 0 };
	int code;
	while (cin >> code) {
		++line[code];
	}
	int max = 0;
	for (int i = 1; i <= 100; ++i) {
		if (max < line[i])max = line[i];
	}
	for (int i = 1; i <= 100; ++i) {
		if (line[i] == max)cout << i << endl;
	}
	return 0;
}