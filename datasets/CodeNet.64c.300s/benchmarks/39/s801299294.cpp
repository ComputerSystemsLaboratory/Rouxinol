#include <cstdio>
#include <cstdlib>
 
int main(){
 int n;
 int ans = 0;
 while(true){
 n = 0;
 scanf("%d\n",&n);
 if(n == 0) break;
 ans = 0;
 for(int a = 9;a >= 0;a--){
   for(int b = 9;b >= 0;b--){
     for(int c = 9;c >= 0;c--){
       for(int d = 9;d >= 0;d--){
        if(a+b+c+d == n){ans++; break;}
        if(a+b+c+d < n) break;
       }
     }
   }
 }
 printf("%d\n",ans);
 }
}