#include <iostream>
using namespace std;
#include <stdio.h>
int main()
{
	char kazu[11] = { "0123456789" },x[1000];
	int ans[1000] = { 0 }, i = 0, j, k;
	while (1){
		cin >> x;
		if (x[0] == '0') break;
		for (j = 0; x[j] != '\0'; j++){
			for (k = 0; k < 10;k++){
				if (x[j] == kazu[k]){
					ans[i] += k; break;
				}
			}
		}
		i++;
	}
	for (j = 0; j < i; j++){
		printf("%d\n",ans[j]);
	}
}