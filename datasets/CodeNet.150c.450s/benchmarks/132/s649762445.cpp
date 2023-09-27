#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int n,p;//~50
	int stone,player[50]={};
	int winner;
	int i;
	
	scanf("%d%d",&n,&p);
	while(1){
	for(i=0;i<50;i++){
		player[i]=0;
	}
	stone=p;
	for(i=0;;i++){
		if(stone==0){
			stone=player[i%n];
			player[i%n]=0;
		}
		else{
			stone-=1;
			player[i%n]+=1;
		}
		if((stone==0)&&(player[i%n]==p)){
			winner=i%n;
			break;
		}
	}
	printf("%d\n",winner);
	scanf("%d%d",&n,&p);
	if((n==0)&&(p==0)){break;}
	}
	return 0;
}