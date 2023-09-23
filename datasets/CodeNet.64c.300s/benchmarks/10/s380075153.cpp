#include<cstdio>

int main(){
	int x, y, i;
	for(i=1; ;i++){
		scanf("%d %d",&x, &y);
		if (x==0&&y==0) break;
		else{
			if(x<y){
				printf("%d %d\n",x, y);
			}else{
				printf("%d %d\n",y, x );
			}
		}
	}

	return 0;
}
