#include<stdio.h>
int main(){
int z[100],x[100][100],y[100],a,b,i,j;
scanf("%d %d",&a,&b);
for(i=0;i<a;i++){
for(j=0;j<b;j++){
scanf("%d",&x[i][j]);
}
}
for(i=0;i<b;i++){
z[i]=0;
scanf("%d",&y[i]);
}
for(i=0;i<a;i++){
for(j=0;j<b;j++){
z[i]+=y[j]*x[i][j];
}
}
for(i=0;i<a;i++){
printf("%d\n",z[i]);
}
}