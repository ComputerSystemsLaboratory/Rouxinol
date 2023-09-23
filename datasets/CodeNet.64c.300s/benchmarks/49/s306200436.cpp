#include<stdio.h>
#include<math.h>
int main(){
int a,b;
while(scanf("%d %d",&a,&b)!=EOF){
a+=b;
printf("%d\n",(int)log10(a)+1);
}
return 0;
}