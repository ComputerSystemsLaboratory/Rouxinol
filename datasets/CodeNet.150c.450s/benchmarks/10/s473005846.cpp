#include<stdio.h>
#include<string.h>
int main()
{
int a[4][3][10];
int b,f,r,v;
int i,j,k;
int n;
for(i=0;i<4;i++) for(j=0;j<3;j++) for(k=0;k<10;k++) a[i][j][k]=0;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf(" %d %d %d %d",&b,&f,&r,&v);
a[b-1][f-1][r-1]=a[b-1][f-1][r-1]+v;
}
for(i=0;i<4;i++){
for(j=0;j<3;j++){
for(k=0;k<10;k++){
printf(" %d",a[i][j][k]);
}
printf("\n");
}
if(i<3) printf("####################\n");
}
return 0;
}