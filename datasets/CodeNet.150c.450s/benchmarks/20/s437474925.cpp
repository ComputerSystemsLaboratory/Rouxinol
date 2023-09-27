#include <iostream>

using namespace std;
int main(void)
{
	int S;
	int h, m, sec;

	cin >> S;
	
	if( (0 <= S) && ( S < 86400 ) )
	{
		h = S / 3600;
		S = S - (3600*h);
		m = S / 60;
		S = S -(60*m);
		sec = S;
		cout << h << ":" << m << ":" << sec << endl;
	}
	else
	{
		cout << "Convert failed." << endl;
	}
	return 0;
}