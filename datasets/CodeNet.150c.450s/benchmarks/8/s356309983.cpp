#include <iostream>
using namespace std;
#include <stdio.h>
#include <string.h>
int main()
{
	int n, T = 0, H = 0, Bool = 1;
	char a[101], b[101];
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> a >> b;
		for (int j = 0; a[j] != '\0' && b[j] != '\0'; j++){
			if (a[j] > b[j]) { T += 3; Bool = false; }
			if (a[j] < b[j]) { H += 3; Bool = false; }
			if (Bool == false) break;
			if (a[j + 1] == '\0' || b[j+1] =='\0' ){
				if (a[j + 1] == b[j + 1]) { T++; H++; }
				else {
					if (a[j + 1] == '\0') H += 3;
					if (b[j + 1] == '\0') T += 3;
				}
			}
		}
		Bool = true;
	}
	printf("%d %d\n", T, H);
	return 0;
}