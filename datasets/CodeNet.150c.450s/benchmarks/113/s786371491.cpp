#include<cstdio>
int main(){
	int a;
	for(int i=1;i<=10000;i++){
		scanf("%d",&a);
		if(a != 0){
			printf("Case %d: %d\n",i,a);
		}else{
			break;
		}
	}
}