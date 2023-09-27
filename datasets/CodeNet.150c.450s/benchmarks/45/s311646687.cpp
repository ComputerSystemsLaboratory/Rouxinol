#include<bits/stdc++.h>
using namespace std;
int main(){
long int m,n,i,x=1,s=1,t,u,v,w,y,r=1,k;
scanf("%ld %ld",&m,&n);
for(i=1; x<1000000007 && i<=n ;++i){
x=x*m;
 }
if(x<1000000007){
   cout<<x<<endl;
}else{
   t=n/(i-1);
   u=n%(i-1);
   v=x%1000000007;
   for(w=1;w<=t;++w){
       s=s*v%1000000007;
   }
   for(k=1;k<=u;++k){
       r=r*m;
}
   y=s*r;
   printf("%ld\n",y%1000000007);
}
return 0;
}
