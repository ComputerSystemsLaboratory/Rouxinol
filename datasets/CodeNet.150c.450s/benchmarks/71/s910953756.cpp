#include <stdio.h>
int main(){
int n;
int a, b, c, d;
int count;
while(scanf("%d", &n) != EOF){
count = 0;
for(a = 0; a < 10; a++){
for(b = 0; b < 10; b++){
for(c = 0; c < 10; c++){
for(d = 0; d < 10; d++){
if(a + b + c + d == n){
count++;
break;
}
}
}
}
}
printf("%d\n", count);
}
return 0;
}