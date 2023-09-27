//ALDS1_10_C
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
	string X, Y;
	int q;
	vector<vector<int> > dp;

	cin>>q;
	for(int i=0;i<q;i++){
		cin>>X;
		cin>>Y;

		dp.resize(X.length()+1);
		for(int j=0;j<=X.length();j++)
			dp[j].resize(Y.length()+1);

		for(int j=0;j<=X.length();j++)
			dp[j][0] = 0;
		for(int k=0;k<=Y.length();k++)
			dp[0][k] = 0;

		for(int j=1;j<=X.length();j++){
			for(int k=1;k<=Y.length();k++){
				if(X[j-1] == Y[k-1])
					dp[j][k] = dp[j-1][k-1] + 1;
				else
					dp[j][k] = max(dp[j-1][k], dp[j][k-1]);
			}
		}

		cout<<dp[X.length()][Y.length()]<<endl;
	}

	return 0;
}