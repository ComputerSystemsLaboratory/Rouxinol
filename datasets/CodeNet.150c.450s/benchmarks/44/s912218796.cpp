#include<iostream>
using namespace std;
int main() {
	int a, b, c, d, e, f, g, h;
	int hit, blow;
	while (cin >> a >> b >> c >> d >> e >> f >> g >> h) {
		hit = 0;
		blow = 0;
		if      (a == e){
			//cout << "11" << endl;
			hit += 1;
		}
		else if (a == f){
			//cout << "12" << endl;
			blow += 1;
		}
		else if (a == g) {
			//cout << "13" << endl;
			blow += 1;
		}
		else if (a == h) {
			//cout << "14" << endl;
			blow += 1;
		}
		if (b == e) {
			//cout << "21" << endl;
			blow += 1;
		}
		else if (b == f) {
			//cout << "22" << endl;
			hit += 1;
		}
		else if (b == g) {
			//cout << "23" << endl;
			blow += 1;
		}
		else if (b == h) {
			//cout << "24" << endl;
			blow += 1;
		}
		if (c == e) {
			//cout << "31" << endl;
			blow += 1;
		}
		else if (c == f) {
			//cout << "32" << endl;
			blow += 1;
		}
		else if (c == g) {
		//	cout << "33" << endl;
			hit += 1;
		}
		else if (c == h) {
	//		cout << "34" << endl;
			blow += 1;
		}
		if (d == e) {
	//		cout << "41" << endl;
			blow += 1;
		}
		else if (d == f) {
	//		cout << "42" << endl;
			blow += 1;
		}
		else if (d == g) {
	//		cout << "43" << endl;
			blow += 1;
		}
		else if (d == h) {
	//		cout << "44" << endl;
			hit += 1;
		}
		cout << hit <<" "<< blow << endl;
	}
}