#include <stdio.h>

int main(void) {
	int w,n, a[30][2],i,c,no,rs[30];
	
	scanf("%d%d",&w,&n);
	for(i = 0; n > i; i++){
		scanf("%d",&a[i][0]);
		getchar();
		scanf("%d",&a[i][1]);
	}
	
	for(i = 1; w >= i; i++){
		no = i;
		for(c = 0; n > c; c++){
			if(a[c][0] == no) no = a[c][1];
			else if(a[c][1] == no) no = a[c][0];
		}
		rs[no-1] = i;
	}
	for(i = 0; w > i; i++){
		printf("%d\n",rs[i]);
	}
	
	return 0;
}