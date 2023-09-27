#include <iostream>
using namespace std;
int X, Y, S;
int tax(int a, int b) {
	return a*(100+b)/100;
}
int max(int m,int s) {
	if (m >s) return m;
	else return s;
}
int solve() {
	int ma = 0;
	for (int i = 1; i < S;i++) {
		for (int j = 1; j < S;j++) {
			if (tax(i,X)+tax(j,X) == S ) {
				ma = max( ma, tax(i,Y)+tax(j,Y) );
				//cout << i << " " << j << " " << tax(i,Y) << " " << tax(j,Y) << endl;
			}
		}
	}
	return ma;
}
int main(){
	while (cin >> X >> Y >> S && X > 0 ) {
		cout << solve() << endl;
	}
}