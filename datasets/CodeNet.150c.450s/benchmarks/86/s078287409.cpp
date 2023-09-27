#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;

int main() {
	int a, b, c;
	while (cin >> a >> b >> c, a | b | c) {
		map<int, int>d;
		int s = 0;
		for (int e = 0; e < a; e++) {
			int f;
			cin >> f;
			s += f;
			d[e + 1] = f;
		}
		int g = (100-c)*s;
		if(d[b])cout << g / d[b] << endl;
		else cout << 0 << endl;
	}
}