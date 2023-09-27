#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void add(int num[],int *pa){
	*pa=(*pa)-1;
	num[(*pa)-1]+=num[*pa];
	num[*pa]=0;
}

void minus(int num[],int *pa){
	*pa=(*pa)-1;
	num[(*pa)-1]-=num[*pa];
	num[*pa]=0;
}

void multiply(int num[],int *pa){
	*pa=(*pa)-1;
	num[(*pa)-1]*=num[*pa];
	num[*pa]=0;
}

int main(){
	int i,n,j,k,num[200];
	char s[1000];int curnum=0;
	while(scanf("%s",s)!=EOF){
		if(s[0]=='+'){
			add(num,&curnum);
		}
		else if(s[0]=='-'){
			minus(num,&curnum);
		}
		else if(s[0]=='*'){
			multiply(num,&curnum);
		}
		else{
			sscanf(s,"%d",&num[curnum]);
			curnum++;
		}
	}
	printf("%d\n",num[0]);
}
