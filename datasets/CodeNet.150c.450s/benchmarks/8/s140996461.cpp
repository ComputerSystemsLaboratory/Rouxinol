#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int n, nr1, nr2;
string s1, s2;
int main(){
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> s1 >> s2;
		if (s1 > s2) {
			nr1 += 3;
		}
		if (s2 > s1) {
			nr2 += 3;
		}
		if (s1 == s2) {
			nr1++;
			nr2++;
		}
	}
	cout << nr1 << ' ' << nr2 <<'\n';
//	system("pause");
}
