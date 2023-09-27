#include<iostream>
#include<string>
using namespace std;

int main(void) {

	//0005
	/*
	int a, b, G, R, L, r;
	while (cin >> a >> b) {
		R = a;
		L = b;
		int tmp;
		if (b > a) {
			tmp = a;
			a = b;
			b = tmp;
		}
		while (1) {
			r = a%b;
			if (r == 0)break;
			a = b;
			b = r;
		}
		G = b;
		R = R / G;
		L = L / G;
		cout << G << " " << R*L * G << endl;
	}
	*/

	string name;
	cin >> name;
	int L = name.size();
	string a, Ans;
	for (int i = 0; i < L; i++) {
		a = name.substr(L-i-1, 1);
		Ans += a;
	}
	cout << Ans << endl;
	return 0;
}