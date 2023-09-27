#include <stdio.h>

int main(){
	int a[30];

	for (int i = 0; i < 30; i++){
		a[i] = 0;
	}
	for (int k = 0; k < 28; k++){
		int b = 0;
		scanf("%d", &b);
		a[b - 1] = 1;
	}
	int aa = 0;
	int bb = 0;
	for (int i = 0; i < 30; i++){
		if (a[i] == 0){
			if (aa == 0){
				aa = i + 1;
			}
			else{ bb = i + 1;
			}if (aa > bb){
				int s;
				s = aa;
				aa = bb;
				bb = s;
			}
		}
	}
	printf("%d\n", aa);
	printf("%d\n", bb);
	return 0;
}