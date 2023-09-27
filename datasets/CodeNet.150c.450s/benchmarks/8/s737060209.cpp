#include<iostream>
#include<string>
using namespace std;
int main() {
	string t[1000], h[1000];
	int tp=0, hp=0, n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> t[i] >> h[i];
		if (t[i] > h[i]) {
			tp = tp + 3;
		}
		if (t[i] < h[i]) {
			hp = hp + 3;
		}
		if (t[i] == h[i]) {
			tp++; hp++;
		}
	}
	cout << tp << " " << hp << endl;
}
