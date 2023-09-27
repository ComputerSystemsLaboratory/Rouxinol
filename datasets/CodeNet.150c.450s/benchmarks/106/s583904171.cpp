#include "cstdio"

int main(){
int a,b,c,cnt;
scanf("%d %d %d",&a,&b,&c);
for(a;a<=b;a++){
if(c%a == 0) cnt++;
}
printf("%d\n",cnt);
}