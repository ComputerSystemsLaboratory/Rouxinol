#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int main(){
   int a,b,c,n;
   int ans = 0;
   while(cin>>n){
      ans = 0;
      for(a=0;a<=9;a++){
         for(b=0;b<=9;b++){
            for(c=0;c<=9;c++){
               if(n-(a+b+c) <= 9 && n-(a+b+c)>=0)
                  ans++;
            }
         }
      }
      printf("%d\n",ans);
   }
   return 0;
}