#include<cstdio>

int main(){
  int n,q,c = 0;
  int s[10000];
  int t[500];
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%d",s+i);
  }
  scanf("%d",&q);
  for(int i=0;i<q;i++){
    scanf("%d",t+i);
  }
  for(int i=0;i<q;i++){
    for(int j=0;j<n;j++){
      if(s[j]==t[i]){
        c++;
        break;
      }
    }
  }
  printf("%d\n",c);
  return 0;
}