#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
long long int heap[250];
int size;
scanf("%d",&size);
for(int i=1;i<=size;i++) cin>>heap[i];
for(int i=1;i<=size;i++){
printf("node %d: key = %d, ",i,heap[i]);
if(i/2>0)printf("parent key = %d, ",heap[i/2]);
if(i*2<=size) printf("left key = %d, ",heap[i*2]);
if(i*2+1<=size)printf("right key = %d, ",heap[i*2+1]);
printf("\n");
}

return 0;
}
