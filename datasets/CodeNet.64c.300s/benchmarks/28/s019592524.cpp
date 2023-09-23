#include<cstdio>

int W, H, x, y, r;

bool included(){
	if(0 <= x - r && x + r <= W && 0 <= y - r && y + r <= H) return true;
	else return false;
}

int main(void){
	scanf("%d %d %d %d %d", &W, &H, &x, &y, &r);

	if(included() == true) printf("Yes\n");
	else if(included() == false) printf("No\n");

	return 0;
}