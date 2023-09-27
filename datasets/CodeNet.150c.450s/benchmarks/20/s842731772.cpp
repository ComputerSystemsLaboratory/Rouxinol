#include<iostream>
using namespace std;



int main(){
	int h, m, s, n,l;



	cin >> n;

	s = n % 60;
	l = n / 60;
	h = n / 3600;
	m = l - h * 60;

	





	cout << h << ":" << m << ":" << s << endl;




	return 0;
}
