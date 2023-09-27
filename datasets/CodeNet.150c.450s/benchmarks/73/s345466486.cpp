#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <cstring>
#include <algorithm>
using namespace std;
int seg[20000000];
int n,q;
void add(int a,int b){
    a+=n-1;
    seg[a]+=b;
    while(a>0){
        a=(a-1)/2;
        seg[a]+=b;
    }
}
int sum(int a,int b,int l,int m,int k){
    if(a<=l&&m<=b)return seg[k];
    
    if(m<a||b<l)return 0;
    
    return sum(a,b,l,(l+m-1)/2,k*2+1)+sum(a,b,(l+m+1)/2,m,k*2+2);
}
int main(void){
   cin>>n>>q;
   int n1=1;
   for(;n1<n;n1*=2);
   n=n1;
   for(int i=0;i<q;i++){
       int c,x,y;
       cin>>c>>x>>y;
       x--;
       if(c==0){
           add(x,y);
       }else{
           y--;
           cout<<sum(x,y,0,n-1,0)<<endl;
       }
   }
   
}