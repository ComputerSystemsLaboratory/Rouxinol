#include <stdio.h>
int main(void)
{
int x, y, r;
scanf("%d %d", &x, &y);
if(x > y){
while(y > 0){
        r = x % y;
        x = y;
        y = r;
}
printf("%d\n", x);
}
if(y >= x){
while(x > 0){
        r = y % x;
        y = x;
        x = r;
}
printf("%d\n", y);
}

return 0;
}