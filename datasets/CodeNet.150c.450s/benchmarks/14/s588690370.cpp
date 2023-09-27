#include <stdio.h>
#include <iostream>
using namespace std;

void call(int n)
{
	int i = 1;
	int x;
	int flag = 0;

	while (i <= n) {
		x = i;
		if (x % 3 == 0 ){
			cout << " " << i;
			if (++i <= n) continue; else break;
		}
		do {
			if (x % 10 == 3) {
				cout << " " << i;
				if (++i <= n) {
					flag = 1;
					break;
				}
			}
			x /= 10;
		} while (x);

		if (flag) {
			flag = 0; 
			continue;
		}
		if (++i > n) break;
	}
	cout << endl;
}

int main(int argc, char* argv[])
{
	int n;
	char temp[100];

	fgets(temp, sizeof(temp), stdin);
	sscanf(temp, "%d", &n);
	call(n);
	return 0;
}