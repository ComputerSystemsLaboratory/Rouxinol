#include <iostream>
enum{
	hour = 3600,
	minute = 60,
	second = 1,
};
using namespace std;


int main(void)
{
	int i, s, m, h;
	cin >> i;
	
	h = i / hour;
	i %= hour;
	m = i / minute;
	i %= minute;
	s = i / second;

	cout << h << ":" << m << ":" << s << endl;
}