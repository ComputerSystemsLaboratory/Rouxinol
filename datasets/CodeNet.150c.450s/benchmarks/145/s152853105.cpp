#include<stdio.h>
#include<string.h>
char str[33];
int lmax=0;
char mword[33];
typedef struct{
	char word[33];
	int time;
}data;
data d[1000];
int cd=0;
int i;
int main(){
	while(scanf("%s",str)!=EOF){
		if(strlen(str)>lmax){
			lmax=strlen(str);
			strcpy(mword,str);
		}
		for(i=0;i<cd;i++)if(strcmp(d[i].word,str)==0){
			d[i].time++;
			break;
		}
		if(i==cd){
			strcpy(d[cd].word,str);
			d[cd++].time=1;
		}
	}
	int fm=0;
	for(i=0;i<cd;i++)if(d[i].time>d[fm].time)fm=i;
	printf("%s %s\n",d[fm].word,mword);
}
		