#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
char str[1005],command[1100],*com,*temp,*p;
int i,j,q,a,b,tmp;
scanf("%s",str);
scanf("%d",&q);
for(i=0;i<q;i++){
scanf("\n%[^\n]",command);
com=strtok(command," ");
if( strcmp(com,"print")==0){
	temp=strtok(NULL," ");a=atoi(temp);
	temp=strtok(NULL," ");b=atoi(temp);
	for(j=a;j<=b;j++){
	printf("%c",str[j]);
	}printf("\n");
   }else if( strcmp(com,"reverse")==0){
	temp=strtok(NULL," ");a=atoi(temp);
	temp=strtok(NULL," ");b=atoi(temp)-1;
	for(j=0;j<=(b-a)/2;j++){
		tmp=str[a+j];str[a+j]=str[b-j+1];str[b-j+1]=tmp;
	}
   }else if( strcmp(com,"replace")==0){
	temp=strtok(NULL," ");a=atoi(temp);
	temp=strtok(NULL," ");b=atoi(temp);
	p=strtok(NULL," ");
	for(j=a;j<=b;j++){
		str[j]=*p;
		p++;
	}
   }
  }
	return 0;
}