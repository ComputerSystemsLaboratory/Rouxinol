#include<iostream>
#include<string>
using namespace std;

int main() {
	int n;
	int taro = 0, hana = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string t, h;
		cin >> t >> h;
		if (t > h)taro += 3;
		else if (t == h) {
			taro++;
			hana++;
		}
		else hana += 3;
	}
	cout << taro << " " << hana << endl;
}