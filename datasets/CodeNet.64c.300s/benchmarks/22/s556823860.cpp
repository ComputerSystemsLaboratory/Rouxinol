#include<stdio.h>
int main(){int n,l,s;scanf("%d",&n);while(n--){int i[3];scanf("%d %d %d",&i[0],&i[1],&i[2]);l=2;while(l--){if(i[l+1]>i[l]){s=i[l+1];i[l+1]=i[l];i[l]=s;}}printf("%s\n",i[2]*i[2]+i[1]*i[1]==i[0]*i[0]?"YES":"NO");}return 0;}