#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> poloc;
vector<int> poloc_odd;

void make_poloc()
{
	int n=1;
	while(1){
		int a = n*(n+1)*(n+2)/6;
		if(a > 1000000)
			break;
		
		poloc.push_back(a);
		if(a % 2 == 1)
			poloc_odd.push_back(a); 
		n++;
	}
}
/*
int search1(int n, int i, int depth)
{
	if(n == 0)
		return depth;
	else if(n < 0 || i < 0)
		return 1000000;
	else
		return min( min(search1(n-poloc[i],i-1,depth+1), search1(n,i-1,depth)), search1(n-poloc[i],i,depth+1));
}
int search2(int n, int i, int depth)
{
	if(n == 0)
		return depth;
	else if(n < 0 || i < 0)
		return 1000000;
	else
		//return min( min(search2(n-poloc_odd[i],i-1,depth+1), search2(n,i-1,depth)), search2(n-poloc_odd[i],i,depth+1));
		return min(search2(n-poloc_odd[i],i-1,depth+1), search2(n,i-1,depth));
}
*/

int main()
{
	make_poloc();
	int n;
	int dp[1000001];
	for(int i=0;i<=1000000;i++){
		dp[i] = 1000000;
	}
	dp[0] = 0;
	for(int i=0;i<poloc.size();i++){
		for(int j=0;j<=1000000;j++){
				if(j+poloc[i] <= 1000000)
					dp[j+poloc[i]] = min(dp[j+poloc[i]],dp[j]+1);
			
		}
	}
	int dpp[1000001] = {0};
	for(int i=0;i<=1000000;i++){
		dpp[i] = 1000000;
	}
	dpp[0] = 0;
	for(int i=0;i<poloc_odd.size();i++){
		for(int j=0;j<=1000000;j++){
				if(j+poloc_odd[i] <= 1000000)
					dpp[j+poloc_odd[i]] = min(dpp[j+poloc_odd[i]],dpp[j]+1);
		}
	}

	while(cin >> n){
		if(n==0)
			break;
		cout << dp[n] << " " << dpp[n] << endl;
	}

	return 0;
	
}