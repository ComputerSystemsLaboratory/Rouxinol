#include<bits/stdc++.h>
int d[11],n,m,i,a,b,s,e;
int main(){
while(true) {
memset(d,0,sizeof(d));s=0;
std::cin>>n>>m;if(!n){break;}
for(i=0;i<n;i++){std::cin>>a>>b;d[b]+=a;}
for(i=10;i>=0;i--){e=std::min(d[i],m);m-=e;s+=i*(d[i]-e);}
printf("%d\n",s);}
}