#include<bits/stdc++.h>
using namespace std;
typedef long long int uli;
int main(){
   int x,y,s;
   while(scanf("%d %d %d",&x,&y,&s)){
      if(x==0)break;
      int ans=0;
      for(int q1=1;q1<=s-1;q1++){
         for(int q2=1;q2<=s-1;q2++){
            if(((100+x)*q1)/100+((100+x)*q2)/100==s){
               int bet= ((100+y)*q1)/100+((100+y)*q2)/100;
               ans=max(ans,bet);
            }
         }
      }
      printf("%d\n",ans);
   }
   return 0;
}