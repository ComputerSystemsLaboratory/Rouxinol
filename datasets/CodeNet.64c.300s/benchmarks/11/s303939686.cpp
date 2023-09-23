#include <iostream>
using namespace std;
#include <stdio.h>
int main()
{
	int s, h, m;
	cin >> s;
	h = s / 3600; m = (s - h * 3600) / 60; s = s - ((h * 3600) + (m * 60));
	printf("%d:%d:%d\n", h, m, s);
	cin >> s;
	return 0;
}