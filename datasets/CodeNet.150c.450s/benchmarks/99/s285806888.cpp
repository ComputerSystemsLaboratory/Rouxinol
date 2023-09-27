#include <stdio.h>
#include <string.h>

char s3[8];
char sub4(int d)//数値を文字に変換
{
	if(d==2)return '2';
	if(d==3)return '3';
	if(d==4)return '4';
	if(d==5)return '5';
	if(d==6)return '6';
	if(d==7)return '7';
	if(d==8)return '8';
	if(d==9)return '9';
}
void sub3(int c)
{
	int cnt=0;
	
	memset(s3,'\0',sizeof(s3));//文字列の中身を空にする
	if(c>=1000){
		if(c>=2000)s3[cnt++]=sub4(c/1000);
		s3[cnt++]='m';
		c=c%1000;
	}
	if(c>=100){
		if(c>=200)s3[cnt++]=sub4(c/100);
		s3[cnt++]='c';
		c=c%100;
	}
	if(c>=10){
		if(c>=20)s3[cnt++]=sub4(c/10);
		s3[cnt++]='x';
		c=c%10;
	}
	if(c>=1){
		if(c>=2)s3[cnt++]=sub4(c/1);
		s3[cnt++]='i';
	}
}
int sub2(char s)//文字を数値に変換
{
	if(s=='2')return 2;
	if(s=='3')return 3;
	if(s=='4')return 4;
	if(s=='5')return 5;
	if(s=='6')return 6;
	if(s=='7')return 7;
	if(s=='8')return 8;
	if(s=='9')return 9;
}
int sub1(char str[])//MCXI文字列をMCXI値に変換
{
	int i;
	int n=0;
	int len=strlen(str);
	
	for(i=0;i<len;i++){
		if(str[i]=='m'){
			if(i!=0)n+=sub2(str[i-1])*1000;
			else n+=1000;
		}
		if(str[i]=='c'){
			if(i!=0&&str[i-1]!='m')
				n+=sub2(str[i-1])*100;
			else n+=100;
		}
		if(str[i]=='x'){
			if(i!=0&&str[i-1]!='m'&&str[i-1]!='c')
				n+=sub2(str[i-1])*10;
			else n+=10;
		}
		if(str[i]=='i'){
			if(i!=0&&str[i-1]!='m'&&str[i-1]!='c'&&str[i-1]!='x')
				n+=sub2(str[i-1])*1;
			else n+=1;
		}
	}
	return n;
}
int main(void)
{
	int num;
	int a,b;
	char s1[500],s2[500];
	
	scanf("%d",&num);
	while(num--){
		scanf("%s%s",s1,s2);
		a=sub1(s1);//1つ目のMCXI文字列をMCXI値に変換
		b=sub1(s2);//2つ目のMCXI文字列をMCXI値に変換
		sub3(a+b);
		printf("%s\n",s3);
	}
		return 0;
}
