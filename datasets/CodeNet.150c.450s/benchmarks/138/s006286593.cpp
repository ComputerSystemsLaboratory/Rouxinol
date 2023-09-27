#include <iostream>
#include <algorithm>
using namespace std;

int calc_gcd(int x, int y) {
    int r = x % y;
    if (r <= 0) {
        return y;
    } else {
        return calc_gcd(y, r);
    }
}

int main() {
	int a, b;
	cin >> a >> b;
	
	if (a < b) swap(a, b);
	
	int answer;
	answer = calc_gcd(a, b);
	
	cout << answer << endl;
	
	return 0;
}