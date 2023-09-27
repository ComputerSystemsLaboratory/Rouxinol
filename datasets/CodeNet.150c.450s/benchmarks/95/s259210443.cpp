#include<iostream>
#include<string>
using namespace std;
int main() {
	int n;
	while (cin >> n&&n) {
		string f[100];
		int cnt = 0;
		int left = 0, right = 0;
		for (int i = 0; i < n; i++) cin >> f[i];
		int pastl, pastr;
		for (int i = 0; i < n; i++) {
			//cout << '('<<i<<')' << endl;
			if (i % 2 == 0) { pastl = left; pastr = right; }
			if (f[i] == "lu") {
				left++; 
				//cout <<"left is "<< left << endl;
			}
			if (f[i] == "ld") {
				left--; 
				//cout <<"left is "<< left << endl;
			}
			if (f[i] == "ru") {
				right++;
				//cout <<"right is "<< right << endl;
			}
			if (f[i] == "rd") {
				right--;
				//cout <<"right is "<< right << endl;
			}
			//cout << "check" << endl << "right:" << right << " " << "left:" << left << endl << "pastr:" << pastr << " " << "pastl:" << pastl << endl;
			if (right == left&&right != pastr&&left != pastl&&i % 2 == 1)cnt++;
			//cout << "cnt:" << cnt << endl;
		}
		cout << cnt << endl;
	}
	return 0;
}