#include <bits/stdc++.h>
using namespace std;

int main(){
  while(1){
    int a0, L;
    scanf("%d%d", &a0, &L);
    if(L==0)break;
    int lst[1000000];
    for(int i=0;i<1000000;i++)lst[i]=-1;
    lst[a0]=0;
    for(int i=1;;i++){
      int a1=0, a2=0;
      int as[L];
      for(int j=0;j<L;j++){as[j]=a0%10;a0/=10;}
      sort(as, as+L);
      for(int j=0;j<L;j++){
        a1*=10;
        a2*=10;
        a1+=as[L-1-j];
        a2+=as[j];
      }
      a0=a1-a2;
      if(lst[a0]==-1)lst[a0]=i;
      else{
        printf("%d %d %d\n", lst[a0], a0, i-lst[a0]);
        break;
      }
    }
  }
  return 0;
}

