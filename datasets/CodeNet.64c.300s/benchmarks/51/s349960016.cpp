#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
int n;
scanf("%d",&n);
unsigned long long int ans=1;
for(;n>0;n--){
ans=ans*n;
}
printf("%lld\n",ans);
return 0;
}