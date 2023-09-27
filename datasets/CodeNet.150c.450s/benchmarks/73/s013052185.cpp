#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
#define MAX_INT 2147483647
using namespace std;
int main(){
  int n,q;
  scanf("%d %d",&n,&q);
  vector<int>a(n+1,0);
  for(int i=0;i<q;i++){
    int com,x,y;
    scanf("%d %d %d",&com,&x,&y);
    if(com){
      int sum=0;
      for(int j=x;j<=y;j++)
       sum+=a[j];
      printf("%d\n",sum);
    }else{
      a[x]+=y;
    }
  }
  return 0;
}