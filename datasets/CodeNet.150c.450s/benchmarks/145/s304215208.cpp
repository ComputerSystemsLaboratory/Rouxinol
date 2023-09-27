#include<stdio.h>
#include<string.h>

int main(){
	char maxc[33],maxl[33],ss[1001][33];
	int a,b,cmax,i,c,count;
	
	memset(ss,'\0',sizeof(ss));
	i=0;
	while(0<=scanf(" %s ",ss[i])){
		++i;
	}
	maxl[0]=maxc[0]='\0';
	cmax=0;
	a=i;
	for(b=0;b<=i;++b){
		if(strlen(maxl)<strlen(ss[b])){
			strcpy(maxl,ss[b]);
		}
		count=0;
		for(c=0;c<=i;c++){
			if(!strcmp(ss[b],ss[c]))++count;
		}
		if(count>cmax){
			cmax=count;
			strcpy(maxc,ss[b]);
		}
	}
	printf("%s %s\n",maxc,maxl);
	return 0;
}