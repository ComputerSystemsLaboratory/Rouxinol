#include<stdio.h>
int main(){
	char x;
	int i,j,k,a[27]={0},count2=97;
	while(x!=EOF){
		x=getchar();
		if((x>='A'&&x<='Z')||(x>='a'&&x<='z')){
			for(j='A';j<='Z';j++){
				if(j==x)a[j-65]++;
			}
			for(k='a';k<='z';k++){
				if(k==x)a[k-97]++;
			}
		}
	}
	for(i=0;i<26;i++){
		printf("%c : %d\n",count2,a[i]);
		count2++;
	}
	return 0;
}