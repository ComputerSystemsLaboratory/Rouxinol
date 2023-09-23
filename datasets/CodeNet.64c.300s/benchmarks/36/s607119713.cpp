#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	int a,b,c;

	cin >> a >> b >> c;

	if(a > b){
		int tmp;
		tmp = a;
		a = b;
		b = tmp;
	}

	if(a > c){
		int tmp1;
		tmp1 = a;
		a = c;
		c = tmp1;
	}

	if(b > c){
		int tmp2;
		tmp2 = b;
		b = c;
		c = tmp2;
	}

	cout << a << ' ' << b << ' ' <<  c << endl;
	return 0;
}