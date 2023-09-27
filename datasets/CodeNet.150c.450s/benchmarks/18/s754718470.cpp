#include <cstdio>
#include <cstdlib>
  
int main(){
 int n;
 scanf("%d",&n);
   
 int ans = 100000;
 for(int i = 0;i < n;i++){
  ans += (double)ans * 0.05;
  if(ans % 1000 > 0) ans = ans - (ans % 1000) + 1000;
 }
 printf("%d\n",ans);
 return 0;
}