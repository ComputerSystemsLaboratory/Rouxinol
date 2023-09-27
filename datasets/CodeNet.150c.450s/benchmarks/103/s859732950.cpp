#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;

int s;

int rec(int n,int sum ,int a){
  if(sum==s && n==0) return 1;
  if(sum>s || n==0 || a>=9) return 0;
  
  int cnt=0;
  for(int i=a+1;i<10;i++){
    cnt += rec(n-1,sum+i,i);
  }
  
  return cnt;
}

int main(){

  while(1){
    int n;
    scanf("%d %d",&n,&s);
    if(n==0 && s==0) break;

    printf("%d\n",rec(n,0,-1));
  }

  return 0;

}