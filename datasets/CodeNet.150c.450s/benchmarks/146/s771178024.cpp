#include<iostream>
#include<vector>
using namespace std;
struct Coordinate {
	long double x;
	long double y;
};
int main() {
	short int n;
	cin >> n;
	vector<bool>l;
	for (int i = 0; i < n; i++){
		Coordinate A, B, C, D;
		cin >> A.x >> A.y >> B.x >> B.y;
		long double Inclination_of_AB = (B.y - A.y) / (B.x - A.x);
		cin >> C.x >> C.y >> D.x >> D.y;
		long double Inclination_of_CD = (D.y - C.y) / (D.x - C.x);
		l.push_back(Inclination_of_AB == Inclination_of_CD);
	}
	for (bool i : l) {
		if (i) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
	return 0;
}