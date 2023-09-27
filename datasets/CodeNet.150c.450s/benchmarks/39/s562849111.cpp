#include <iostream>
using namespace std;

int main(void)
{
	int tate, yoko;
	int menseki, syuu;

	cin >> tate;
	cin >> yoko;

	menseki = tate * yoko;

	syuu = 2 * (tate + yoko);

	cout << menseki << " " << syuu << endl;

	return 0;
}

