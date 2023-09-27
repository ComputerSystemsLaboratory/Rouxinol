#include <stdio.h>
int main(){
bool a[31];
int temp;
for(int i=1;i<31;i++)a[i]=true;
for(int i=0;i<28;i++){
scanf("%d",&temp);
a[temp]=false;
}
for(int i=1;i<31;i++)if(a[i])printf("%d\n",i);
}