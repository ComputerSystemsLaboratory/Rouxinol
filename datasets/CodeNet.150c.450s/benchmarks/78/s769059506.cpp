#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  int n;
  int table[200]={0};
  int table_odd[200]={0};
  int dp1[1000000]={0};
  int dp2[1000000]={0};
  for(int i=0,c=0;i<200;i++){
    table[i]=(i+1)*(i+2)*(i+3)/6;
    if(table[i]%2==1){
      table_odd[c++]=table[i];
    }
  }
  for(int i=0;i<1000000;i++){
    int min1=1<<30;
    int min2=1<<30;
    for(int j=0;j<200;j++){
      if(table[j]!=0 && i>=table[j]){
	min1=min(min1,dp1[i-table[j]]+1);
      }
      if(table_odd[j]!=0 && i>=table_odd[j]){
	min2=min(min2,dp2[i-table_odd[j]]+1);
      }
    }
    if(min1 == 1<<30) min1 = 0;
    if(min2 == 1<<30) min2 = 0;

    dp1[i]=min1;
    dp2[i]=min2;
  }
  while(cin>>n,n){
    cout<<dp1[n]<<' '<<dp2[n]<<endl;
  }
  return 0;
}