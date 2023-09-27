#include <stdio.h>

int main (){
	
	int a,b;
	scanf ("%d %d", &a, &b);
	int num[a];
	for (int i = 0 ; i < a ; i++){
		scanf ("%d", &num[i]);
	}
	
	for (int i = b ; i < a ; i++){
		if (num[i-b] < num[i]){
			printf ("Yes\n");
		}
		else {
			printf ("No\n");
		}
	}
	
	return 0;
}