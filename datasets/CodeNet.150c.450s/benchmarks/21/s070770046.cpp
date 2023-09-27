#include<cstdio>
int Cubic(int n){
	n = n * n * n;
	return n;
}

int main(){
	int x;

	scanf("%d",&x);

	x = Cubic(x);

	printf("%d\n",x);
	return 0;
}