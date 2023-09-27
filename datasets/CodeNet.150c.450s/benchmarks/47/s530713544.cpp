#include<stdio.h>
int main() {
	int W,H,x,y,r,buff;
	scanf("%d %d %d %d %d", &H, &W, &x,&y,&r);
	if (x - r >= 0 && y - r >= 0 && x + r <= H && y + r <= W)printf("Yes\n");
	else printf("No\n");
}
