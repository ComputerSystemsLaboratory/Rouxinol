
#include<iostream>

using namespace std;

int main(){

	int t;
	int h,m,s;

	cin >> t;

	h = t/3600;
	t = t - h*3600;
	m = t/60;
	t = t -m*60;
	s = t;

	cout << h << ":" << m << ":"<< s << endl;

	return 0;

}