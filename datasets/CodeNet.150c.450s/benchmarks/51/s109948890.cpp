#include<cstdio>
#include<cstring>

int main(){
int a[30],b;
memset(a,0,sizeof(int)*30);
for(int i=0;i<28;i++){
scanf("%d",&b);
a[b-1]=1;
}
for(int i=0;i<30;i++) if(a[i]==0) printf("%d\n",i+1);
return 0;
}