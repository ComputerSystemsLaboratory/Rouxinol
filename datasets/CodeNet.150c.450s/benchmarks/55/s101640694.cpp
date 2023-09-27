#include <iostream>
#include <cstring>
#include <stdio.h>
using namespace std;

int main(){
	char c[1000][1001];
	int a;
	
	for (int i=0;i<1000;i++){
		scanf("%s",c[i]);
		//if (c[i][0] == '0' && c[i][1] == NULL) {
		if (strcmp(c[i],"0") == 0) {
			a = i;
			break; 
		}
	}
	for (int i=0;i<=a;i++){
		int sum = 0;
		for (int j=0;j<1000;j++){
			if (c[i][j] == '\0') break;
			sum += c[i][j] - 48;
		}
		if (sum != 0) cout << sum << endl;
	}
	return 0;
}