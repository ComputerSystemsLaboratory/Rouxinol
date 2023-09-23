#include<stdio.h>
#include<math.h>

int sosu(int num){
	int i,j;
	int flag=0;
	int ans=1;
	
	for(i=3;i<=num;i+=2){
		for(j=3;j<=sqrt(num);j+=2){
			if(i==j)j++;
			if(i%j==0){
				flag=1;
				break;
			}
		}
	if(flag==0)ans++;
	flag=0;
	}
	return ans;
}

int main(){
	int num;
	int ans=0;
	int i,j,k;
	int box[1000000];
		
	while(scanf("%d",&num)!=EOF){
		
		for(i=2;i<=num;i++)box[i]=1;
		
		for(i=2;i<=sqrt(num);i++){
			if(box[i]==1){
				for(j=2;i*j<=num;j++){
					box[i*j]=0;
				}
			}
		}
		for(i=0;i<=num;i++)if(box[i]==1)ans++;
		printf("%d\n",ans);
		ans=0;
	}
	return 0;
}