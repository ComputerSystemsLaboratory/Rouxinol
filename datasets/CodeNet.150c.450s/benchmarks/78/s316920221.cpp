#include <iostream>
using namespace std;

int si[200];
int dp_k[1000000];
int dp[1000000];

void mk(){
  for(int i=0;i<200;i++){
    si[i]=(i*(i+1)*(i+2))/6;
    if(si[i]>1000000){break;}
    dp[si[i]]=1;
    if(si[i]%2==1)
      dp_k[si[i]]=1;
  }
}

int main()
{
  int x,y;
  for(int i=0;i<200;i++)si[i]=1000000;
  for(int i=0;i<1000000;i++){dp[i]=100000;dp_k[i]=100000;}
  mk();
  
  
  dp[0]=0;
  dp_k[0]=0;
  for(int i=1;i<1000000;i++){
    for(int j=1;j<200;j++){
      if((i+si[j])<1000000){
	dp[i+si[j]]=min(dp[i+si[j]],dp[i]+1);
	if(si[j]%2==1)
	  dp_k[i+si[j]]=min(dp_k[i+si[j]],dp_k[i]+1);
      }
    }
  }
    


  for(;;){
    cin >> x;
    if(x==0)return 0;
    cout << dp[x] <<" "<<dp_k[x]<<endl;
    
  }
}