#include <stdio.h>

int main(){
	int n[100] = { 0 };
	int	x[100] = { 0 };
	int i = 0,j;
	int a, b, c;
	int ways[100] = { 0 };
	while (1){
		scanf("%d %d", &n[i], &x[i]);
		if (n[i] == 0 && x[i] == 0){
			break;
		}
		for (a = 1; a <= n[i]; a++){
			for (b = 1; b <= n[i]; b++){
				for (c = 1; c <= n[i]; c++){
					if (a != b && b != c&&a != c){
						if (a  + b  + c == x[i]){
							ways[i]++;
						}
					}
				}
			}
		}
		ways[i] /= 6;
		i++;
		
	}

	for (j = 0; j < i; j++){
		printf("%d\n", ways[j]);
	}

}