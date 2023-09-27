#include<bits/stdc++.h>
#define P pair<int,int>
using namespace std;
 
signed main(){
   int a,b;
   P c[10000];
   while(scanf("%d%d",&a,&b),a|b){
       for(int d=0;d<a;d++){
	   int e,f;
	   scanf("%d%d",&e,&f);
	   c[d]=P(f,e);
	   }
	   sort(c,c+a);
	   reverse(c,c+a);
	   int s=0;
	   for(int g=0;g<a;g++){
	       int l=min(b,c[g].second);
	       b-=l;
	       c[g].second-=l;
	       s+=c[g].first*c[g].second;
	       }
	       printf("%d\n",s);
       }
}