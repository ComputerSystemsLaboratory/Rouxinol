#include<cstdio>

int main(void){
int n,m,i,k,j;
scanf("%d",&n);
int a[n],b[n],c[n],d[n],r[120]={0};

for(i=0;i<n;i++){
scanf("%d%d%d%d",&a[i],&b[i],&c[i],&d[i]);
k=30*(a[i]-1)+10*(b[i]-1)+c[i]-1;
r[k]=r[k]+d[i];
};
for(i=1;i<=3;i++){
for(j=1;j<=3;j++){
for(k=1;k<=10;k++){
printf(" %d" ,r[30*(i-1)+10*(j-1)+k-1]);
};
printf("\n");
};
for(m=1;m<=20;m++)
{printf("#");};
printf("\n");
};
for(j=1;j<=3;j++){
for(k=1;k<=10;k++){
printf(" %d" ,r[30*(3)+10*(j-1)+k-1]);
};
printf("\n");
};

return 0;
}