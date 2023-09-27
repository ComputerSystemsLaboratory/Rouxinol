#include <stdio.h>
int main(void) {
int x, i=0;
while( scanf("%d", &x),++i,x!=0) {
printf("Case %d: %d\n", i, x);
}
return 0;
}