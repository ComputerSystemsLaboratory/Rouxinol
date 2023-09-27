#include<cstdio>
#include<iostream>

using namespace std;

int n,m;
int c[30],dp[50004];
int main(){
  scanf("%d%d",&n,&m);
  for(int i=0;i<m;i++)
    scanf("%d",&c[i]);


  for(int i=1;i<=n;i++){
    dp[i]=i;
    for(int j=0;j<m;j++){
      if(i==c[j]){
        dp[i]=1;
        break;
      }else{
        if(i>c[j])
        dp[i]=min(dp[i],dp[i-c[j]]+dp[c[j]]);
        //cout << "i: " << i << "   c[j]: " << c[j] << endl;
      }
    }
    //cout << i<< " :" <<dp[i] << endl;
  }


  printf("%d\n",dp[n]);

  return 0;
}