#include<iostream>
using namespace std;
int main() {
	int n, p;
	while (cin >> n >> p, n, p) {
		int k[60] = {};
		int w = p, now = 0;
		while (true) {
			if (w) {
				k[now]++; w--;
				if ((!w)&&k[now] == p) {
					cout << now << endl;
					goto end;
				}
			}
			else if (!w) {
				w = k[now];
				k[now] = 0;
			}
			now++;
			if (now == n)now = 0;
		}
	end:;
	}
}