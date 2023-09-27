#include <stdio.h>
int main(){
int a[101]={0},temp,top=0;
while(scanf("%d",&temp)!=EOF){
a[temp]++;
}
for(int i=1;i<101;i++){
if(a[i]>top)top=a[i];
}
for(int i=1;i<101;i++)if(a[i]==top)printf("%d\n",i);
}