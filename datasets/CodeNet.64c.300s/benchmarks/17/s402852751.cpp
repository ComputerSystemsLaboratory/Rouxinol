#include <iostream>
using namespace std;

int f(int x,int p) {
	return p * (100 + x) / 100;
}

int main() {
	int x1,x2,s;

	while(cin >> x1 >> x2 >> s && !(x1 == 0 && x2 == 0 && s == 0)) {
		int max = 0,res;
		for(int i = 1;i <= s - 1;i++) {
			for(int j = 1;j <= s - 1;j++) {
				res = f(x2,i) + f(x2,j);
				if((f(x1,i) + f(x1,j) == s) && res > max) {
					max = res;
				}
			}
		}
		cout << max << endl;
	}
}