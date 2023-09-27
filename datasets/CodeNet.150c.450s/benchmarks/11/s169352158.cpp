#include<cstdio>
int main(void){
int a[4][13];
char c[10];
int x;
int n;
scanf("%d",&n);
for(int i=0;i<4;i++){
for(int j=0;j<13;j++)a[i][j]=0;
}
for(int i=0;i<n;i++){
scanf("%s %d",c,&x);
if(c[0]=='S')a[0][x-1]=1;
if(c[0]=='H')a[1][x-1]=1;
if(c[0]=='C')a[2][x-1]=1;
if(c[0]=='D')a[3][x-1]=1;
}
for(int i=0;i<13;i++){
if(a[0][i]==0)printf("S %d\n",i+1);
}
for(int i=0;i<13;i++){
if(a[1][i]==0)printf("H %d\n",i+1);
}
for(int i=0;i<13;i++){
if(a[2][i]==0)printf("C %d\n",i+1);
}
for(int i=0;i<13;i++){
if(a[3][i]==0)printf("D %d\n",i+1);
}
return 0;
}