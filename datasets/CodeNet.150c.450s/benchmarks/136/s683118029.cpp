#include<cstdio>
int g(int x,int y){
	if(y==0)return x;
	return g(y,x%y);
}

int main(){
	int a,b;
	while(~scanf("%d%d",&a,&b))printf("%d %d\n",g(a,b),a/g(a,b)*b);
}