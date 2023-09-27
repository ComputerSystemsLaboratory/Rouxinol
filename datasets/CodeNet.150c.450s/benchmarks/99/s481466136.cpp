#include<stdio.h>
#include<string.h>


int main(){
	char in[10],out[10];
	int n,i,mcxi,j,k;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		mcxi=0;
		for(k=0;k<2;k++){
			scanf(" %s ",in);
			for(j=0;;j++){
				if(in[j]=='\0')break;
				if(in[j]=='m'){
					if(j-1==-1 || in[j-1]>'9'){
						mcxi+=1000;
					}else{
						mcxi+=1000*(in[j-1]-'0');
					}
				}
				
				if(in[j]=='c'){
					if(j-1==-1 || in[j-1]>'9'){
						mcxi+=100;
					}else{
						mcxi+=100*(in[j-1]-'0');
					}
				}
				
				if(in[j]=='x'){
					if(j-1==-1 || in[j-1]>'9'){
						mcxi+=10;
					}else{
						mcxi+=10*(in[j-1]-'0');
					}
				}
				
				if(in[j]=='i'){
					if(j-1==-1 || in[j-1]>'9'){
						mcxi+=1;
					}else{
						mcxi+=in[j-1]-'0';
					}
				}
			}
		}
		
		j=0;
		if(mcxi/1000==1){
			out[j]='m';
			++j;
		}else if(mcxi/1000>1){
			out[j]=mcxi/1000+'0';
			++j;
			out[j]='m';
			++j;
		}
		mcxi%=1000;
		
		if(mcxi/100==1){
			out[j]='c';
			++j;
		}else if(mcxi/100>1){
			out[j]=mcxi/100+'0';
			++j;
			out[j]='c';
			++j;
		}
		mcxi%=100;
		
		if(mcxi/10==1){
			out[j]='x';
			++j;
		}else if(mcxi/10>1){
			out[j]=mcxi/10+'0';
			++j;
			out[j]='x';
			++j;
		}
		mcxi%=10;
		
		if(mcxi==1){
			out[j]='i';
			++j;
		}else if(mcxi>1){
			out[j]=mcxi+'0';
			++j;
			out[j]='i';
			++j;
		}
		out[j]='\0';
		printf("%s\n",out);
	}
	return 0;
}