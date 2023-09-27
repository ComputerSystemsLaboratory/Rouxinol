#include<stdio.h>
#include<string.h>

typedef struct{
	int num[6];
}saikoro;


saikoro s_1;

void n(saikoro *a){
	int tmp;
	tmp=a->num[4];
	a->num[4]=a->num[0];
	a->num[0]=a->num[1];
	a->num[1]=a->num[5];
	a->num[5]=tmp;
}

void s(saikoro *a){
	int tmp;
	tmp=a->num[1];
	a->num[1]=a->num[0];
	a->num[0]=a->num[4];
	a->num[4]=a->num[5];
	a->num[5]=tmp;
}

void e(saikoro *a){
	int tmp;
	tmp=a->num[2];
	a->num[2]=a->num[0];
	a->num[0]=a->num[3];
	a->num[3]=a->num[5];
	a->num[5]=tmp;
}

void w(saikoro *a){
	int tmp;
	tmp=a->num[3];
	a->num[3]=a->num[0];
	a->num[0]=a->num[2];
	a->num[2]=a->num[5];
	a->num[5]=tmp;
}

int main(){
	int i,num,slen;
	char input[128];
	
	fgets(input,sizeof input,stdin);
	sscanf(input,"%d %d %d %d %d %d",&s_1.num[0],&s_1.num[1]
		,&s_1.num[2],&s_1.num[3],&s_1.num[4],&s_1.num[5]);
	
	fgets(input,sizeof input,stdin);
	slen=strlen(input)-1;
	for(i=0;i<slen;i++){
		switch(input[i]){
			case 'N':
				n(&s_1);
			break;
			
			case 'S':
				s(&s_1);
			break;
			
			case 'E':
				e(&s_1);
			break;
			
			case 'W':
				w(&s_1);
			break;
		}
	}
	
	printf("%d\n",s_1.num[0]);
	return 0;
}