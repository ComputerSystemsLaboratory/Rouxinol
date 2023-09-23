#include <iostream>
using namespace std;

int main(){
	long t;
	int h, m;
	cin >> t;
	
	h = t/3600;
	t -= h*3600;
	m = t/60;
	t -= m*60;
	
	cout << h << ":" << m << ":" << t << endl;
}
