#include<cstdio>

int solve(int a,int b){
 
 if(b==4){
  if(a==0) return 1;
  else return 0; 
 }
 else{
  int res=0;
  for(int i=0;i<=a&&i<10;i++){
   res+=solve(a-i,b+1);
  }
  return res;
 }
}

int main(){
 int n;
 while(~scanf("%d",&n)){
  printf("%d\n",solve(n,0));
}
return 0;
}