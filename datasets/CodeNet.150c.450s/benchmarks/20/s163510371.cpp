#include <iostream>
using namespace std;

int main(void)
{
	int s;
	int h, m;
	
	cin >> s;
	
	h =  s / 3600;
	s %= 3600;
	m = s / 60;
	s %= 60;
	
	cout << h << ":" << m << ":" << s << endl;
	
	return (0);
}