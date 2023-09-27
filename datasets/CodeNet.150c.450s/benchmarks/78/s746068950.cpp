#include<iostream>
#include<algorithm>
using namespace std;
int dp1[1000001],dp2[1000001];
int main(){
  int c1[100000],c2[100000],i,m,p=0,k;
  for(i=0;i*(i+1)*(i+2)/6<=1000000;i++){
    c1[i]=i*(i+1)*(i+2)/6;
    if(c1[i]%2==1){
      c2[p]=c1[i]; 
      p++; 
    }
  }
  for(int j=0;j<=1000000;j++){
    dp1[j]=j;
    dp2[j]=j;
    for(int k=0;k<i;k++){
      if(j-c1[k]>=0)dp1[j]=min(dp1[j],dp1[j-c1[k]]+1);
      if(k<p){
	if(j-c2[k]>=0){
	dp2[j]=min(dp2[j],dp2[j-c2[k]]+1);
       }
      }
    }
  }

  while(1){
  cin >>m;
  if(m==0)break;

  cout << dp1[m]<<" "<<dp2[m]<<endl;
  }
 return 0;
}