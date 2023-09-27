#include <iostream>
using namespace std;

int main()
{
	int hour, min, sec;
	do {
		cin >> sec;
	} while ((sec < 0) || (86400 <= sec));

	hour = sec / 3600;
	min = (sec - hour * 3600) / 60;
	sec = sec - (hour * 3600 + min * 60);

	cout << hour << ':' << min << ':' << sec << endl;

    return 0;
}