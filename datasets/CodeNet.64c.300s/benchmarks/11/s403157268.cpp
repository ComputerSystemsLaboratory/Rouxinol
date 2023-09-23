#include<iostream>
using namespace std;

int main()
{
	int S = 0;
	int h = 0;
	int m = 0;
	int s = 0;

	cin >> S;
	h = S / 3600;
	m = (S - h * 3600) / 60;
	s = (S - h * 3600 - m * 60);

	cout << h << ":" << m << ":" << s << endl;

	return 0;
}