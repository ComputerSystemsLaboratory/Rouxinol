#include <iostream>
using namespace std;

long long dp[31];
int main(){
	
	dp[0]=0;
	dp[1]=1;
	dp[2]=2;
    dp[3]=4;
int i=4;
	while(i<31){
		dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
        //cout << i << endl;
        i++;
	}
    for(;;){
	int n;
	cin >> n;
    if(n==0)return 0;
     if(dp[n]%3650==0)
	   cout << (dp[n]/3650) << endl;
     else
       cout << (dp[n]/3650)+1 << endl;
}
}