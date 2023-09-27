#include <iostream>
#include <vector>
#include <map>
#include <cstdio>

using namespace std;

int main() {
	map<string, int> reg;
	int N; cin >> N;
	for (int i = 0; i < N; ++i) {
		string str; cin >> str;
		reg[str] = 0;
	}
	int k = 0;
	int M; cin >> M;
	for (int i = 0; i < M; ++i) {
		string str; cin >> str;
		if (reg.find(str) != reg.end()) {
			if (k == 0) {
				printf("Opened by %s\n", str.c_str());
				k = 1;
			}
			else {
				printf("Closed by %s\n", str.c_str());
				k = 0;
			}
		}
		else printf("Unknown %s\n", str.c_str());
	}
}