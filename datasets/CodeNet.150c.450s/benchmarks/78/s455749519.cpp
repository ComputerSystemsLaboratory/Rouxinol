#include <cstdio>
#include <iostream>
#include <vector>
#include <list>
#include <cmath>
#include <fstream>
#include <algorithm>
#include <string>
#include <queue>
#include <set>
#include <map>
#include <complex>
#include <iterator>
#include <cstdlib>
#include <cstring>
#include <sstream>
#include <stack>
#include <climits>

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
double EPS=1e-10;
double EQ(double a,double b){
	return abs(a-b)<EPS;
}
const int INF=1000000000;
int dp1[2][1000001];
int dp2[2][1000001];
void solve(){
	vector<int> nums;
	for(int i=1;;i++){
		int a=i*(i+1)*(i+2)/6;
		nums.push_back(a);
		if(a>1000000)break;
	}
	int n=nums.size()-1;
	for(int i=n;i>=0;i--){
		int cur=i%2;
		int nxt=(i+1)%2;
		for(int j=0;j<=1000000;j++){
			int res=INF;
			if(i==n){
				if(j==0)res=0;
			}
			else{
				if(j-nums[i]>=0)
					res=min(res,dp1[cur][j-nums[i]]+1);
				res=min(res,dp1[nxt][j]);
			}
			dp1[cur][j]=res;
		}
	}
	nums.clear();
	for(int i=1;;i++){
		int a=i*(i+1)*(i+2)/6;
		if(a%2==1)
			nums.push_back(a);
		if(a>1000000)break;
	}
	n=nums.size()-1;
	for(int i=n;i>=0;i--){
		int cur=i%2;
		int nxt=(i+1)%2;
		for(int j=0;j<=1000000;j++){
			int res=INF;
			if(i==n){
				if(j==0)res=0;
			}
			else{
				if(j-nums[i]>=0)
					res=min(res,dp2[cur][j-nums[i]]+1);
				res=min(res,dp2[nxt][j]);
			}
			dp2[cur][j]=res;
		}
	}
	int in;
	while(cin>>in&&in){
		cout<<dp1[0][in]<<" "<<dp2[0][in]<<endl;
	}
}


int main(){
	solve();

}