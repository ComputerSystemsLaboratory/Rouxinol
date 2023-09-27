#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char const *argv[])
{
	int h, m, s;
	cin >> s;

	h = s / 3600;
	s %= 3600;
	m = s / 60;
	s  %= 60;

	printf("%d:%d:%d\n", h, m, s);
	return 0;
}