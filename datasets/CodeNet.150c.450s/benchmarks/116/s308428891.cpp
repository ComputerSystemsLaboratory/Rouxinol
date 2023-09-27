#include<iostream>
#include<cstdio>
using namespace std;
int n,k;
int A[100001];
int main(){
  while(1){
    scanf("%d %d",&n,&k);
    if(!n && !k) break;
    for(int i=0;i<n;i++) scanf("%d",&A[i]);
    int res=0;
    int sum=0;
    for(int i=0;i<k;i++){
      sum+=A[i];
    }
    res = sum;
    for(int i=k,j=0;i<n;i++,j++){
      sum-=A[j]; sum+=A[i];
      res = max(res,sum);
    }
    printf("%d\n",res);
  }
}