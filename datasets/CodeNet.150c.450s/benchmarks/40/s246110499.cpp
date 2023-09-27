#include<stdio.h>
int main(){
	struct Dice{
		int surface[6];
		int surface2[6];
		char s[100];
	};
	struct Dice d1;
	for(int i=0;i<6;i++){
	scanf("%d",&d1.surface[i]);
	d1.surface2[i] = d1.surface[i];
	}
	scanf("%s",d1.s);
	for(int i=0;i<100;i++){
		if(d1.s[i]=='\0') break;
		if(d1.s[i]=='S'){
			d1.surface2[0] = d1.surface[4];
			d1.surface2[1] = d1.surface[0];
			d1.surface2[2] = d1.surface[2];
			d1.surface2[3] = d1.surface[3];
			d1.surface2[4] = d1.surface[5];
			d1.surface2[5] = d1.surface[1];
		}
		else if(d1.s[i]=='E'){
			d1.surface2[0] = d1.surface[3];
			d1.surface2[1] = d1.surface[1];
			d1.surface2[2] = d1.surface[0];
			d1.surface2[3] = d1.surface[5];
			d1.surface2[4] = d1.surface[4];
			d1.surface2[5] = d1.surface[2];
		}
		else if(d1.s[i]=='W'){
			d1.surface2[0] = d1.surface[2];
			d1.surface2[1] = d1.surface[1];
			d1.surface2[2] = d1.surface[5];
			d1.surface2[3] = d1.surface[0];
			d1.surface2[4] = d1.surface[4];
			d1.surface2[5] = d1.surface[3];
		}
		else{
			d1.surface2[0] = d1.surface[1];
			d1.surface2[1] = d1.surface[5];
			d1.surface2[2] = d1.surface[2];
			d1.surface2[3] = d1.surface[3];
			d1.surface2[4] = d1.surface[0];
			d1.surface2[5] = d1.surface[4];
		}
		for(int j=0;j<6;j++){
			d1.surface[j] = d1.surface2[j];
		}
	}
	printf("%d\n",d1.surface2[0]);
	return 0;
}