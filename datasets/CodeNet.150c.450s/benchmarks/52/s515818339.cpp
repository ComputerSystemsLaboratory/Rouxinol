#include <stdio.h>
int main() {int RB[105],last=0,i;while (scanf("%d",&i)!=EOF) {if (!i) printf("%d\n",RB[--last]); else RB[last++]=i;}return 0;}