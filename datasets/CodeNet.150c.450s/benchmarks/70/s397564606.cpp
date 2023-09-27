#include<stdio.h>
int main()
{
int p[12]={31,29,31,30,31,30,31,31,30,31,30,31};
int M,D,sum;
while(1)
{
sum=0;
scanf("%d",&M);
scanf("%d",&D);if(M==0)break;
if(M==0)break;
for(int i=0;i<M-1;i++)
sum+=p[i];

sum+=D;

switch(sum%7)
{
case 4:
printf("Sunday\n");break;
case 5:
printf("Monday\n");break;

case 6:
printf("Tuesday\n");break;

case 0:
printf("Wednesday\n");break;

case 1:
printf("Thursday\n");break;

case 2:
printf("Friday\n");break;

case 3:
printf("Saturday\n");break;
}
}
return 0;
}