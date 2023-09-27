#include <iostream>
using namespace std;

int main() {
	int s;	
	cin >> s;
	
	int h = s / 3600;
	int m = s / 60 % 60;
	int s2 = s % 60;
	cout << h << ":" << m << ":" << s2 << endl;
	
	return 0;
}
