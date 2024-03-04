#include <stdio.h>

int main (){
	int i, m[3] = {}, a;
	for(i = 0; i < 10; i++){
		scanf("%d", &a);
		if(a > m[0]){
			m[2] = m[1];
			m[1] = m[0];
			m[0] = a;
		} else if(a > m[1]){
			m[2] = m[1];
			m[1] = a;
		} else if(a > m[2]){
			m[2] = a;
		}
	}
	for(i = 0; i < 3; i++){
		printf("%d\n", m[i]);
	}
	return 0;
}