#include<cstdio>

int main(){
	int W, H, x, y, r;
	scanf("%d %d %d %d %d", &W, &H, &x, &y, &r);
	if(W-r<x||H-r<y||x<r||y<r){
		printf("No\n");
	}else{
		printf("Yes\n");
	}

	return 0;
}