#include<stdio.h>

int main(){

int n,r;
while(1){
scanf("%d%d",&n,&r);if(n==0&&r==0)break;
int N[52]={};int N2[52]={};
for(int i=1;i<=n;i++){
N[i]=1+n-i;N2[i]=1+n-i;}



for(int i=0;i<r;i++)
{int p,c;
scanf("%d%d",&p,&c);
for(int j=1;j<p;j++){
N2[j+c]=N[j];
}

for(int j=p;j<p+c;j++){
N2[j-p+1]=N[j];
}
for(int j=0;j<=n;j++)
N[j]=N2[j];

}
printf("%d\n",N2[1]);
}
return 0;
}