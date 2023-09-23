#include <stdio.h>
int main()
{
int n,i,j;
int ans;
char era[1000000];
while(scanf("%d",&n) != EOF){
for(i=0; i<=n;i++)
era[i]=1;
ans=0;
for(i=2;i<=n;i++){
if(era[i] == 1){
ans++;
for(j=i; j<=n;j+=i)
era[j]=0;
}
}
printf("%d\n",ans);
}
return 0;
}