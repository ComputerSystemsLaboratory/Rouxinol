#include<cstdio>

int H;

bool exist(int x){
	if(x >= 1 && x <= H) return true;
	else return false;
}

int main(void){
	scanf("%d", &H);
	int s[H], i, p, l, r;
	for(i = 1;i <= H;i++) scanf("%d", &s[i]);
	for(i = 1;i <= H;i++){
		printf("node %d: key = %d, ", i, s[i]);
		p = i / 2;
		if(exist(p)) printf("parent key = %d, ", s[p]);
		l = i * 2;
		if(exist(l)) printf("left key = %d, ", s[l]);
		r = i * 2 + 1;
		if(exist(r)) printf("right key = %d, ", s[r]);
		printf("\n");
	}
	return 0;
}