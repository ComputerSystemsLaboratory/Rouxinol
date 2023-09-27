#include <stdio.h>
#include <iostream>
using namespace std;
int main(){

	int n,i,j,k,y,z;
	char cards[4][13] = {0};
	char x,a;

	scanf("%d", &n);

	for (i = 0; i < n; i++){
		cin >> x >> y;

		

		switch (x){
		case 'S':
			z = 0;
			break;
		case 'H':
			z = 1;
			break;
		case 'C':
			z = 2;
			break;
		case 'D':
			z = 3;
			break;

		}
		cards[z][y-1] = 1;

	}
	
	

		for (i = 0; i < 4; i++){
			for (j = 0;j<13; j++){
				if (cards[i][j] == '\0'){
					switch (i){
					case 0:
						a = 'S';
						break;
					case 1:
						a = 'H';
						break;
					case 2:
						a = 'C';
						break;
					case 3:
						a = 'D';
						break;
					}
					printf("%c %d\n", a, j+1);
				}
			}

			
		}
	
	
	return 0;

}