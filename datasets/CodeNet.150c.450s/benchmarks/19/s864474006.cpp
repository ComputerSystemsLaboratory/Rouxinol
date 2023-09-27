#include<cstdio>
int main(){
	int a,b;
	for(int i=1;i<=10000;i++){
		scanf("%d %d",&a,&b);
		if(a == 0 && b == 0){
			break;
		}else if(a < b){
			printf("%d %d\n",a,b);
		}else{
			printf("%d %d\n",b,a);
	}
}
}