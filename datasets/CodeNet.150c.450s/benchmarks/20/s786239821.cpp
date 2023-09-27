#include<iostream>
using namespace std;
int main(){

	int h, m, s;
	cin >>s;
	h = s / 3600;
	s -= h * 3600;
	m = s / 60;
	s -= m * 60;
	cout << h << ":" << m << ":" << s << endl;

	return 0;
}
