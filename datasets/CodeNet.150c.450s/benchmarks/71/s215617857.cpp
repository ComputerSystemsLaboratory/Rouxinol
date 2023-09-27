#include<cstdio>
int main(){
	int n;
	int i,j,k;
	while(scanf("%d",&n) != EOF){
		int counter = 0;
		for(i=0;i<=9;i++){
			for(j=0;j<=9;j++){
				for(k=0;k<=9;k++){
					if(n-(i+j+k) >= 0 && n-(i+j+k) <= 9){
						counter++;
					}
				}
			}
		}
		printf("%d\n",counter);
	}
	return 0;
}