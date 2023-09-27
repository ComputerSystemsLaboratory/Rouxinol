#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include <string.h>

#define MAX_SIG 100
#define MAX_OPE 1000000

using namespace std;

int main(){

	int i = 0;
	int j;
	int stac[MAX_SIG];
	char sign[MAX_OPE];

	while (1){

		if (scanf("%s", sign) == EOF){
			break;
		}

		if (sign[0] == '\n'){
			break;
		}

		if (*sign == '+'){
			i--;
			i--;
			stac[i] += stac[i + 1];
			i++;
		}
		else if (*sign == '-'){
			i--;
			i--;
			stac[i] -= stac[i + 1];
			i++;
		}
		else if (*sign == '*'){
			i--;
			i--;
			stac[i] *= stac[i + 1];
			i++;
		}
		else {
			stac[i] = atoi(sign);
			i++;
		}
	}

	cout << stac[0] << endl;

	return 0;

}