#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int cnt=0,i = 0, a, c, b, j, x, y, z, r, H, W;
	cin >> a >> b >> c;
	for (i = a; i < b+1; i++) {
		if (c%i == 0) {
			cnt++;
		}
	}
	printf("%d\n", cnt);
}