#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector<int>l;
	int n;
	while (cin >> n) {
		if (n == 0)break;
		int sum = 0;
		n = 1000 - n;
		if (n >= 100) {
			int a = n % 10;//1??????
			n -= a;
			n /= 10;
			int b = n % 10;//10??????
			n -= b;
			n /= 10;
			int c = n;//100??????
			if (a >= 5) {
				sum++;
				a -= 5;
			}
			sum += a;
			if (b >= 5) {
				sum++;
				b -= 5;
			}
			sum += b;
			if (c >= 5) {
				sum++;
				c -= 5;
			}
			sum += c;
		}
		else if (n >= 10){
			int a = n % 10;
			n -= a;
			n /= 10;
			int b = n;
			if (a >= 5) {
				sum++;
				a -= 5;
			}
			sum += a;
			if (b >= 5) {
				sum++;
				b -= 5;
			}
			sum += b;
		}
		else{
			if (n >= 5) {
				sum++;
				n -= 5;
			}
			sum += n;
		}
		l.push_back(sum);
	}
	for (int i : l) {
		cout << i << endl;
	}
}