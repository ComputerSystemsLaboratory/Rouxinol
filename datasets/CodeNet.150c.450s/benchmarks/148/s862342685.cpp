#include<stdio.h>

int main(){
	int N;
	int c1=0,c2=0,c3=0,c4=0;
	scanf("%d", &N);
	for(int i=0; i<N; i++){
		char msg[5];
		scanf("%s", msg);
		if(msg[0]=='A'){
			c1++;
		}
		else if(msg[0]=='W'){
			c2++;
		}
		else if(msg[0]=='T'){
			c3++;
		}
		else{
			c4++;
		}
	}
	printf("AC x %d\nWA x %d\nTLE x %d\nRE x %d\n", c1, c2, c3, c4);
	return 0;
}