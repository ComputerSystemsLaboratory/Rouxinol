#include <set>
#include <map>
#include <list>
#include <queue>
#include <stack>
#include <cmath>
#include <ctime>
#include <cstdio>
#include <vector>
#include <string>
#include <bitset>
#include <cctype>
#include <cstdlib>
#include <cstring>
#include <utility>
#include <numeric>
#include <complex>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <cassert>
#include <iostream>
#include <iterator>
#include <algorithm>
using namespace std;
int main(){
	int N;
	while(cin>>N){
		if(N==0)break;
		int dp[33]={};
		dp[0]=1;
		for(int i=0;i<N;i++){
			for(int j=1;j<=3;j++){
				dp[i+j]+=dp[i];
			}
		}
		if(dp[N-1]%365==0){
			cout<<dp[N]/3650<<endl;
		}
		else cout<<(dp[N]/3650)+1<<endl;
	}
	return 0;
}