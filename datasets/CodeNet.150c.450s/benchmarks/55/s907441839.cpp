#include<stdio.h>
int main(void){
char kazu[1001];
int kazu2[1001];
	int t,wa=0;
	for(;;){
		scanf("%s",kazu);
		if(kazu[0]=='0'){
			break;
		}
		for(t=0;kazu[t]!='\n'&&kazu[t]!='\0';t++){
			wa+=kazu[t]-'0';
			
		}

		printf("%d\n",wa);
		wa=0;
	}
	return 0;
}