#include <stdio.h>

int main()
{
int p[11]={};
int x,i;
i=0;x=0;
while(scanf("%d",&x)!=EOF)
{
if(x>0){p[i]=x;i++;}
else{i--;printf("%d\n",p[i]);}

}
return 0;
}