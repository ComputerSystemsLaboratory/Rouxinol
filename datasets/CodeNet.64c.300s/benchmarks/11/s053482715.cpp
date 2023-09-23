#include <iostream>
using namespace std;

int main() {
	int S, h = 0, m = 0, s = 0;
	cin >> S;
	h = S/3600;
	S -= h*3600;
	m = S/60;
	S -= m*60;
	s = S;
	cout << h << ":" << m << ":" << s << endl;
}
