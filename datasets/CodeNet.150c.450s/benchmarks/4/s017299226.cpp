#include <stdio.h>
#include <iostream>
using namespace std;

char judge(int m, int f, int r);

int main(void)
{		
	while (1) {
		int m, f, r;
		cin >> m >> f >> r;
		
		if (m == -1 && f == -1 && r == -1) break;
		
		cout << judge(m, f, r) << endl;
	}
	
	return 0;
}

char judge(int m, int f, int r)
{
	if (m == -1 || f == -1) return 'F';
	int sum = m + f;
	if (sum >= 80) return 'A';
	if (sum >= 65) return 'B';
	if (sum >= 50) return 'C';
	if (sum >= 30) {
		if (r >= 50) return 'C';
		else return 'D';
	}
	else return 'F';
}