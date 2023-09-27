#include<bits/stdc++.h>
using namespace std;
int main(){
  int D,i,j,sum,ans = 0;scanf("%d",&D);
  int c[26],s[D][26],t,l[26] = {};
  fill(l,l+26,-1);
  for(i=0;i<26;i++) scanf("%d",&c[i]);
  for(i=0;i<D;i++){
    for(j=0;j<26;j++) scanf("%d",&s[i][j]);
  }
  for(i=0;i<D;i++){
    scanf("%d",&t);t--;
    for(j=0;j<26;j++){
      if(j==t) ans += s[i][j];
      else ans -= (i-l[j])*c[j];
    }
    printf("%d\n",ans);
    l[t] = i;
  }
}