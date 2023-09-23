#include <stdio.h>
int main(){
char ch;
int num,max;
int p[101]={0};
int q[2][10]={0};
while(scanf("%d",&num) != EOF)    
{         
	p[num] += 1;     
}   

max=0;
for(int i=0;i<101;i++){
if(max<p[i])max=p[i];
}
for(int i=0;i<101;i++){
if(max==p[i])printf("%d\n",i);
}

return 0;
}