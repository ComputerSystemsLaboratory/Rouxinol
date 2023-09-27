#include <stdio.h>
int main()
{
int n,i;
int ans=100000;
scanf("%d",&n);
for(i=0;i<n;i++){
ans *= 1.05;
ans = ((ans+999)/1000)*1000;
}
printf("%d\n",ans);
return 0;
}