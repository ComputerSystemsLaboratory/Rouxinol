#include <iostream>
#include <cstring>

using namespace std;


long long dp[101][21];

int main() {

  int n;
  int a[101];


  cin >> n;

  for(int i=0;i<n;i++) cin >> a[i];

  memset(dp,0,sizeof(dp));

  dp[1][a[0]]=1; //1ÔÚÜÅvZµ½Æ«ÉrÊªa[0]Å éêÍPÊè

  for(int i=1;i<n-1;i++) {

    //DP(dp[i+1][j}a[i]]=°(j=0/j=20)dp[i][j])
    //i+1ÔÚÜÅvZµ½rÊªA élk(=j}a[i])Å éÆ¢¤±ÆÍAiÔÚÜÅvZµ½rÊªA éljÅ ÁÄA©Âa[i](i+1ÔÚÌ)ðvZµ½Æ¢¤±Æ
    for(int j=0;j<=20;j++) {

      //DPe[uª0ÅÈ¢Æ«(} è)
      if(dp[i][j]>0) {

	int plus=j+a[i];
	int minus=j-a[i];

	if(plus>=0 && plus<=20) dp[i+1][plus]+=dp[i][j];

	if(minus>=0 && minus<=20) dp[i+1][minus]+=dp[i][j];

      }

    }

  }

  //n-1ÔÚÜÅvZµ½rÊÌlªa[n-1](nÔÚÌB½¾µ0<=a[n-1]<=9)Å éÈçÎA»êÍA»ÌãÉa[n-1]ð«»¤ªø±¤ªK¸³µ¢Æm©ßé±ÆªoéêÆÈÁÄ¢éB
  //æÁÄAdp[n-2][a[n-1]]Ìlª®ÌÂÆÈé
  cout << dp[n-1][a[n-1]] << endl;

  return 0;

}