#include<iostream>
using namespace std;
bool f[31];
int main() {
	for (int i = 0;i < 28;i++) {
		int n; cin >> n;
		f[n] = true;
	}
	for (int i = 1; i <= 30;i++) {
		if (!f[i]) cout << i << endl;
	}
}