#include<stdio.h>


int main(){
	int n;
	int a=0;
	int	b=0;
	int apoint=0;
	int bpoint=0;
	int i;

	scanf("%d",&n);

	while(n!=0){
		for(i=0;i<n;i++){
			scanf("%d %d",&a,&b);
			if(a<b){
				bpoint = bpoint + a + b;
			}if(a>b){
				apoint = apoint + a + b;
			}if(a==b){
				apoint= apoint + a;
				bpoint= bpoint + b;
			}
		}		
		printf("%d %d\n",apoint,bpoint);
		apoint=0;
		bpoint=0;
		scanf("%d",&n);
	}
}