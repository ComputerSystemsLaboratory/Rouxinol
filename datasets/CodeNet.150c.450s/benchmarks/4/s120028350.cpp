#include <iostream>
using namespace std;

char grade(int m, int f, int r);

int main() {
	int m, f, r;
	while (cin >> m >> f >> r){
		if (m==-1 && f==-1 && r==-1) break;
		cout << grade(m, f, r) << endl;
	}
	return 0;
}

char grade(int m, int f, int r){
	if (m == -1 || f == -1) return 'F';
	if (m + f >= 80) return 'A';
	if (m + f >= 65) return 'B';
	if (m + f >= 50) return 'C';
	if (m + f >= 30){
		if (r >= 50) return 'C';
		return 'D';
	}
	return 'F';
}