#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


int dp[34];
int main(){
int N,x;

  cin >> x;
  dp[0] = 1;
  for(int i = 0; i < 31; i++){

	  dp[i+1] += dp[i];
	  dp[i+2] += dp[i];
	  dp[i+3] += dp[i];

  }

  while(x != 0){

	  cout << dp[x]/3650 + 1 << endl;;

	  cin >> x;
  }


    


	return 0;
}