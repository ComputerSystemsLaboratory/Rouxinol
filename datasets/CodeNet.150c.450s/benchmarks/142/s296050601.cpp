#include<stdio.h>


int main(){
	int n,k;
	
	scanf("%d%d",&n,&k);
	long long int termscore[n+100];
	long long int score[n+100];
	for(int i =0;i<=n+100;i++){
	 termscore[i] = 1;
	 score[i]=0;	
	}
	int first = 1;
	int index = k+1;
	for(int i = 1;i<=n;i++){
		scanf("%lld",&score[i]);
		if(i<=k) termscore[k] +=score[i];
		else if(k<i){
			termscore[i] = termscore[i-1] - score[first] + score[i];
			first++; index++;
		}
	}
	for(int i = k;i<n;i++){
		//printf("Termscore[%d] : %d\n",i,termscore[i]);
		if(termscore[i]<termscore[i+1]) printf("Yes\n");
		else printf("No\n");
		
	}
	
	
	
	return 0;
}