#include<stdio.h>
#include<math.h>

int main(){
	int a;
	while(scanf("%d",&a),a){
	int ans=0;
	for(int i=1;i<=sqrt(a*2);i++){
		if(i%2==0){
			if(a*2%i==0&&a%i!=0){
				ans++;
				//printf("%d OK!\n",i);
			}
		}
		else{
			if(a>=i*(i+1)/2&&a%i==0){
				ans++;
				//printf("%d OK!\n",i);
			}
		}
	}
	printf("%d\n",ans-1);
	}
}