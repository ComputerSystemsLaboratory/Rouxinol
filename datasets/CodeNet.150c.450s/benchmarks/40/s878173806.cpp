#include<stdio.h>
#include<math.h>
#include<string.h>
typedef struct Dice{
	int d[6];
	int r[6];
}dice;
int main(void)
{
	dice num;
	int i,t[4]={0};
	char s[128];
	for(i=0;i<6;i++){
		scanf("%d",&(num.d[i]));
	}
	scanf("%s",s);
	for(i=0;i<strlen(s);i++){
		for(int c=0;c<6;c++){
			num.r[c]=num.d[c];
		}
		if(s[i]=='E'){
			t[0]++;
			num.r[2]=num.d[0];
			num.r[3]=num.d[5];
			num.r[5]=num.d[2];
			num.r[0]=num.d[3];
		}else if(s[i]=='W'){
			t[1]++;
			num.r[5]=num.d[3];
			num.r[2]=num.d[5];
			num.r[0]=num.d[2];
			num.r[3]=num.d[0];
		}else if(s[i]=='S'){
			t[2]++;
			num.r[0]=num.d[4];
			num.r[4]=num.d[5];
			num.r[5]=num.d[1];
			num.r[1]=num.d[0];
		}else if(s[i]=='N'){
			t[3]++;
			num.r[0]=num.d[1];
			num.r[1]=num.d[5];
			num.r[5]=num.d[4];
			num.r[4]=num.d[0];
		}
		for(int c=0;c<6;c++){
			num.d[c]=num.r[c];
		}
	}
	printf("%d\n",num.d[0]);
	return 0;
}