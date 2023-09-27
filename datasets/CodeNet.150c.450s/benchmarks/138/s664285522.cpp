#include<cstdio>
int gcb(int x, int y){
	if(x%y==0) return y;
	else return gcb(y, x%y);
}
int main(){
	int x,y;
	scanf("%d%d", &x, &y);
	printf("%d\n", ((x>=y)?gcb(x,y):gcb(y,x)));
	return 0;
}
