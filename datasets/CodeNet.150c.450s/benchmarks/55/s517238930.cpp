#include<stdio.h>
int main()
{
int i=0;
int sum=0;
char ch[1001]={0};

while(1)
{
	i=0;
scanf("%s",ch);
if(ch[0]-'0'==0)break;
sum=0;
while(1)
{
if(ch[i]=='\0')break;
sum+=(ch[i]-'0');
i++;
}
printf("%d\n",sum);
}
return 0;
}