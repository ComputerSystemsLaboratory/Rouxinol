#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
int a[5];
for(int i=0;i<5;i++){
scanf("%d",&a[i]);
}
sort(a,a+5);
printf("%d %d %d %d %d\n",a[4],a[3],a[2],a[1],a[0]);
return 0;
}