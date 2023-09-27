#include <cstdio>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int S, seconds, hours, minutes;

	cin >> S;

	hours = S / 3600;
	minutes = (S % 3600) / 60;
	seconds = (S % 3600) % 60;

	printf( "%d:%d:%d\n", hours, minutes, seconds );

	return 0;
}