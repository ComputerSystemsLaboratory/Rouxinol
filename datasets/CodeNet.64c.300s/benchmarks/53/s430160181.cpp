#include<cstdio>
int main(){
	int a,b,c,x,i;
	i = 0;
	scanf("%d %d %d",&a,&b,&c);
	for(int x=a; x <= b; x++){
		if(c % x == 0){
			i++;
		}
	}
	printf("%d\n",i);
return 0;
}