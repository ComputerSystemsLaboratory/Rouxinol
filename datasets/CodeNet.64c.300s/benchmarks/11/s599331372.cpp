#include <iostream>
using namespace std;

int main()
{
	int S;

	cin >> S;

	int h = (int)(S / 3600);
	int m = (int)((S - h * 3600) / 60);
	int s = S - h * 3600 - m * 60;

    cout << h << ":" << m << ":" << s << endl;

	return 0;
}
