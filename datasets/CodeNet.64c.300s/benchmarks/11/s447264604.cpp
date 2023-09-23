#include <iostream>
using namespace std;

int main(void){
	int time;
	int h, m, s;
	cin >> time;
	h = time / 3600;
	m = (time - h * 3600) / 60;
	s = (time - h * 3600 - 60 * m);
	cout << h << ":" << m << ":" << s << "\n";
	return 0;
}