#include<iostream>
using namespace std;

int main(){
	int t, h, m, s;

	cin >> t;

	h = t / 3600;
	m = (t - (h * 3600)) / 60;
	s = t - (h * 3600 + m * 60) ;

	cout << h << ':' << m << ':' << s << endl;

	return 0;
}