#include <iostream>
using namespace std;
int main(){
	int h=0 , m , s;
	cin >> s;
	m=s/60;
	h=m/60;
	if (m>=60) m%=60;
	s %= 60;
	cout << h << ':' << m << ':' << s << endl;
	return 0;
}