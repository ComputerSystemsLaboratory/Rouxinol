#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
using namespace std;
int main(){
	int n;
	cin >> n;
	while(n--){
		string a,b;
		cin >> a >> b;
		int asize = a.size(),bsize = b.size();
		vector<vector<int> > dp(asize+1,vector<int>(bsize+1,0));
		for(int i=1;i<asize+1;i++){
			for(int j=1;j<bsize+1;j++){
				if(a[i-1] == b[j-1]){
					dp[i][j] = dp[i-1][j-1] + 1;
				}else{
					dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
				}
			}
		}
		/*				for(int i = 0;i<asize+1;i++){
		copy(dp[i].cbegin(),dp[i].cend(),ostream_iterator<int>(cout, " ") );
		cout << endl;
		}*/
				
		cout << dp[asize][bsize] << endl;
	}
}