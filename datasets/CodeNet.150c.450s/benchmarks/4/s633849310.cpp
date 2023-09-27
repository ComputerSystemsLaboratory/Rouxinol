#include <iostream>
using namespace std;
#include <stdio.h>
int main()
{
	int m[100], f[100], r[100], i=0;
	char ans[100];
	do{
		cin >> m[i] >> f[i] >> r[i];
		if ((m[i] != -1 || f[i] != -1) || r[i] != -1){
			if (m[i] == -1 || f[i] == -1)
				ans[i] = 'F';
			else{
				if (m[i] + f[i] >= 80)
					ans[i] = 'A';
				else if (m[i] + f[i] >= 65)
					ans[i] = 'B';
				else if (m[i] + f[i] >= 50)
					ans[i] = 'C';
				else if (m[i] + f[i] >= 30){
					if (r[i] >= 50) ans[i] = 'C';
					else			ans[i] = 'D';
				}
				else ans[i] = 'F';
			}
		}
		i++;
	} while ((m[i-1] != -1 || f[i-1] != -1) || r[i-1] != -1);
	for (int j = 0; j < i - 1; j++){
		printf("%c\n", ans[j]);
	}
}