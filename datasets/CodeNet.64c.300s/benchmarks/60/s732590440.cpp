#include <iostream>
#include <cstring>

using namespace std;


int dp[20][20];

int main() {

  int a,b;
  int n;
  
  int x,y;
  bool con[20][20];


  while(cin >> a >> b,a || b) {

    cin >> n;

    for(int i=0;i<a;i++) {

      for(int j=0;j<b;j++) {

	con[j][i]=false;

      }

    }

    for(int i=0;i<n;i++) {

      cin >> x >> y;

      con[y-1][x-1]=true;

    } 

    memset(dp,0,sizeof(dp));

    dp[0][0]=1;

    for(int i=0;i<a;i++) {

      for(int j=0;j<b;j++) {

	if(i!=0 && con[j][i-1]==false) dp[i][j]+=dp[i-1][j];

	if(j!=0 && con[j-1][i]==false) dp[i][j]+=dp[i][j-1];

      }

    }

    cout << dp[a-1][b-1] << endl;

  }

  return 0;

}

  