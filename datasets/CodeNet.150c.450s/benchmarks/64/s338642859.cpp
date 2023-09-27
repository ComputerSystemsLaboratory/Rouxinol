#include <stdio.h>
int n;
int A[20];

int  judge(int i ,int M){
  if(M==0) return 1;
  if(i>=n) return 0;
  int ret1 = judge(i+1,M-A[i]);
  int ret2 = judge(i+1,M);
  return ret1==1 || ret2==1;

}

int main(){
  scanf("%d",&n);
  int i;
  for (i=0;i<n;i++) scanf("%d",&A[i]);
  int m;
  scanf("%d",&m);
  int M;
  for (i=0;i<m;i++){
    scanf("%d",&M);
    if(judge(0,M))printf("yes\n");
    else printf("no\n");
  }
  return 0;
}
  
  