#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;
int main(void){
int x,n;
int y;
for(;;){
scanf("%d %d",&n,&x);
y=0;
if(n==0&&x==0)break;
for(int i=1;i<=n;i++){
for(int j=i+1;j<=n;j++){
if(x-i-j>j&&x-i-j<=n)y++;
}
}
printf("%d\n",y);
}
return 0;
}