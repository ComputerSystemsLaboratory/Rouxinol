#include <stdio.h>
#include <iostream>
using namespace std;

int main(void)
{
	int a, b;
	cin >> a;
	cin >> b;
	
	int area = a * b;
	int length = 2 * a + 2 * b;
	
	cout << area << " " << length << endl;
	
	return 0;
}