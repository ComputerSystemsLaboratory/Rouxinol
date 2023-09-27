#include <stdio.h>
int main(){
int n,l,r,a,b;
while(1){
scanf("%d",&n);
if(n==0)return 0;
a=b=0;
while(n--){
scanf("%d%d",&l,&r);
if(l>r)a+=l+r;
if(r>l)b+=l+r;
if(l==r){
	a+=l;
	b+=r;
}
}
printf("%d %d\n",a,b);
}
}