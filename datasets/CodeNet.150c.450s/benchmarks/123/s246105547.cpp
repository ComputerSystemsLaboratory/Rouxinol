#include<cstdio>
#include<cmath>

bool findPrimeNum(int n){
  for(int i=2;i*i<=n;i++)
    if(n%i==0) return false;

  if( n!=1 ) return true; 
}
int main(){
   
  int n,cnt=0;
  scanf("%d",&n);
  int data;
  for(int i=0;i<n;i++){
    scanf("%d",&data);
    if(findPrimeNum(data)==true)cnt++;
  }
  printf("%d\n",cnt);
  return 0;
}