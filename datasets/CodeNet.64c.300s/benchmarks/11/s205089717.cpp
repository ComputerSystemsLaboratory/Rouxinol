#include<iostream>
using namespace std;

int main() {
	int S;
	int h;
	int m;
	int s;
	cin >> S;
	s = S % 60;
	S /= 60;
	m = S % 60;
	h = S / 60;
	cout << h << ":" << m << ":" << s << endl;
	return 0;

}
