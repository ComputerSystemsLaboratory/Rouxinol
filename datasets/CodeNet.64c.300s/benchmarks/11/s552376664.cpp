#include <iostream>

using namespace std;

int main(void)
{

	int a;
	cin >> a;
	int hour = a / 3600;
	a -= hour * 3600;
	int sec = a / 60;
	a -= sec * 60;
	cout << hour << ":" << sec << ":" << a << endl;
	return 0;
}