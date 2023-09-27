#include <stdio.h>
int main()
{
int a,b,c,d,n;
int i,j,k,l;
int ans=0;
while(scanf("%d",&n) != EOF){
for(i=0;i<10;i++){
for(j=0;j<10;j++){
for(k=0;k<10;k++){
for(l=0;l<10;l++){
if(i+j+k+l == n)
ans++;
}
}
}
}
printf("%d\n",ans);
ans = 0;
}
return 0;
}