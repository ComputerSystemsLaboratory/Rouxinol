#include <stdio.h>
int main(void) {
int i,n,x;
scanf("%d", &n);
for( i=0; i<n; ++i) {
x=i+1;
if(x%3==0) {
printf(" %d", i+1);
}else {
while(x){
if(x%10==3){
printf(" %d", i+1);
break;
}
x /= 10;
}
}
}
putchar('\n');
}