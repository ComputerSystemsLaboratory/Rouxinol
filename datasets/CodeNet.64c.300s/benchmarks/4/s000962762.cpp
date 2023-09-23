#include <iostream>


int main(void)
{
	using namespace std;
	int a,b,c;
	cin >> a;
	cin >> b;
	cin >> c;
	if((a < b) && (b < c))	cout << "Yes" << endl;
	else  cout << "No" << endl;

	return 0;

}