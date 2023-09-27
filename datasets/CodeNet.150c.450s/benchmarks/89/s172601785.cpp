#include<stdio.h>

int main(){
bool f[1000001];
for(int i=1;i<1000000;i++)
{f[i]=true;
for(int j=2;j*j<=i;j++)
if(i%j==0){f[i]=false;break;}
}

f[1]=false;
while(1){int a,b,n;
scanf("%d%d%d",&a,&b,&n);if(a==0&&b==0&&n==0)break;
int c=0;
//for(int i=0;c<n;i++){
int i=0;
while(c!=n){
if(f[a+b*i]==true)c++;
i++;
}
printf("%d\n",a+b*(i-1));
}

return 0;
}