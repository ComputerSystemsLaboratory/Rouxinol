#include <stdio.h>

int main(){
	int i, x, y;
	for(i=1;;i++){
		scanf("%d %d", &x, &y);
		if(x == 0 && y == 0) break;
		
		printf("%d %d\n",(x > y)? y:x ,(x > y)? x:y);
	}
	return 0;
}