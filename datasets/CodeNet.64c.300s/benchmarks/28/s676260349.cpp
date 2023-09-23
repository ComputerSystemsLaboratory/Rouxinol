#include<stdio.h>
int main(){
	int w, h, x, y, r, luas1, luas2;
	scanf("%d %d %d %d %d", &w, &h, &x, &y, &r);
	if(x>=w || y>=h || r>x || r>y){
		printf("No\n");
	}
	else{
		printf("Yes\n");
	}
}
