#include<iostream>
#include<cstdio>

using namespace std;

int main(){
	int N,M,P,sum,winner;
	
	while(cin>>N>>M>>P){
		if(N==0 && M==0 && P==0){
			break;
		}
		
	    sum=0;
	    winner=0;
		for(int i=1;i<=N;i++){
			int temp=0;
			cin>>temp;
			if(M==i){
				winner=temp;
			}
			sum=sum+temp;
		}
		
		
		if(winner!=0){
			sum=(sum*(100-P))/winner;
			printf("%d\n",sum);
		}
		else{
			printf("0\n");
		}
	}
	return 0;
}