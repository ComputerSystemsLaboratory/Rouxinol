#include <stdio.h>
int RideBack[32];
void _swap(int left, int right) {int bk=RideBack[left];RideBack[left]=RideBack[right];RideBack[right]=bk;}
int main() {int N,W,i,j;scanf("%d %d",&W,&N);for (i=1;i<=W;RideBack[i]=i,i++);while (N--) {scanf("%d,%d",&i,&j);_swap(i,j);}for (i=1;i<=W;printf("%d\n",RideBack[i++]));return 0;}