#include<bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c, yaku = 0;
	cin >> a >> b >> c;
	while(a <= b) {
		if(c % a == 0) {
			yaku++;
		}
		a++;
	}
	cout << yaku << endl;
}
