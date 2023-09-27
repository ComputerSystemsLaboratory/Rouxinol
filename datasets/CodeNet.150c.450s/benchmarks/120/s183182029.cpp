#include<iostream>
#include<cstdio>
using namespace std;

int int_pow(int n,int m){
	int ans=1;
	while(m--) ans*=n;
	return ans;
}

int main(){
	int R,C;
	while(cin>>R>>C,R||C){
		int ans=0,sumC,sum,osenbei[10][10000];
		for(int i=0;i<R;i++){
			for(int j=0;j<C;j++){
				cin>>osenbei[i][j];
			}
		}
		for(int bit=0,loop=int_pow(2,R);bit<loop;bit++){
			sum=0;
			for(int i=0;i<C;i++){
				sumC=0;
				for(int j=0;j<R;j++){
					if((bit>>j & 1) ^ (osenbei[j][i] & 1)){
						sumC++;
					}
				}
				if(sumC <= R/2){
					sumC = R-sumC;
				}
				sum+=sumC;
			}
			if(sum > ans){
				/*for(int i=0;i<R;i++){
					printf(" %d",bit>>i & 1);
				}puts("");*/
				ans=sum;
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}