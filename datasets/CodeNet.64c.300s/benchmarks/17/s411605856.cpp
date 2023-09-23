#include<iostream>
#include<algorithm>
using namespace std;

int tax(int p, int x) {
	int ans;
	ans = (p * (100 + x) / 100);
	return ans;
}

int main(){
	int a, b, x, y, s, maxsum, tmpsum;
	while (1) {
		cin >> x >> y >> s;
		if (x == 0 && y == 0 && s == 0) break;
		maxsum = 0;
		a = 1;
		while (a <= s - 1) {
			b = 1;
			while (a + b <= s) {
				tmpsum = tax(a, x) + tax(b, x);
				if (tmpsum == s) {
					maxsum = max(maxsum, tax(a, y) + tax(b, y));
				}
				b++;
			}
			a++;
		}
		cout << maxsum << endl;
	}




	return 0; 
}