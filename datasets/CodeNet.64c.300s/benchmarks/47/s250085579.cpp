#include <stdio.h>
#include<math.h>
#include <string.h>
#include <ctype.h>

int main(){
int i,n;
int max,a[100]={0};
while(scanf("%d",&n)!=EOF){
a[n]++;
}
max=0;
for(i=0;i<100;i++){
if(max<a[i]){
max=a[i];
}
}
for(i=0;i<100;i++){
if(a[i]==max){
printf("%d\n",i);
}
}

return 0;
}