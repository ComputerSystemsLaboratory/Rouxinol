#include <stdio.h>
int main() {int N=0,i,j=28;while (j--) scanf("%d",&i),N|=(1<<i);for (i=1;i<31;i++) if (!(N&(1<<i))) printf("%d\n",i);return 0;}