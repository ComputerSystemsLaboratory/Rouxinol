/***
*	?????§??¬?´???° Crea
****/

#include <iostream>
#include <stdio.h>
using namespace std;

void swap(long x, long y)
{
	long temp = x;
	x = y;
	y = temp;
}

long gcd(long x, long y)
{
	if (x < y){
		swap(x, y);
	}
	while (y > 0){
		int r = x % y;
		x = y;
		y = r;
	}
	return x;
}

int main(void)
{
	long x,	y;

	cin >> x >> y ;
	
	x=gcd(x,y);
	
	cout << x << endl;
	
	return 0;
}