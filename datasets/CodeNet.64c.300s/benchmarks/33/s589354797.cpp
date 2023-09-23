#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int a, b;
	char c;
	while (cin>>a>>c>>b) {
		if (c !='?') {
			switch (c)
			{
			case '+':
				cout << a + b << endl; break;
			case'-':
				cout << a - b << endl; break;
			case'/':
				cout << a / b << endl; break;
			case'*':
				cout << a*b << endl; break;
			}
		}
		else { return 0; }
	}
	return 0;
}