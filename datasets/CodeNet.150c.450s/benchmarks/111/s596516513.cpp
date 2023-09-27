//============================================================================
// Name        : TopCoderCompetition.cpp
// Author      : taguchi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <bitset>
#include <algorithm>
#include <map>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>
#include <numeric>
#include <list>
#include <sstream>
using namespace std;
//#define P pair<int,int>
//#define max 999999
typedef unsigned int uint;
typedef long long ll;
typedef unsigned long long ull;
#define rep(i,n) for(ull i = 0;i<n;i++)
#define pb(n) push_back(n)
#define clear(n) memset(n,0,sizeof(n))

typedef vector<int> vi;
typedef vector<string> vs;
struct edge{int cost,to;};

vector<string> split(string &in,char delimiter){
	vector<string> re; uint cur = 0,next;
	while((next = in.find_first_of(delimiter,cur)) != string::npos){
		re.pb(string(in,cur,next-cur));
		cur = next + 1;
	}
	re.pb(string(in,cur,in.size()-cur));
	return re;
}
vector<int> split_int(string &in, char delimiter){
	vector<string> str = split(in,delimiter);
	vector<int> re;
	rep(i,str.size()){
		re.pb(strtol(str[i].c_str(),NULL,10));
	}
	return re;
}

class Range{
public:
	int a,b;
	Range(int an,int bn) : a(an),b(bn){}

	bool operator()(int n){
		return a<=n&&n<=b;
	}
	bool isCross(Range x){
		return x(a) || x(b);
	}
	bool contains(Range x){
		return this->a <= x.a && x.b <= this->b;
	}
};

vector<int> nums;
ull dp[110][25];
ull dfs(int n, int sum){
	ull result = 0;
	if(sum < 0 || sum > 20) return 0;
	if(dp[n][sum] != -1) return dp[n][sum];
	if(n == nums.size() - 1) {
		if(nums[n] == sum) return 1;
		else return 0;
	}
	result = dfs(n+1,sum + nums[n]) + dfs(n+1,sum - nums[n]);
	return dp[n][sum] = result;
}
int main(){
	int N;
	rep(i,110)rep(j,25){
		dp[i][j] = -1;
	}
	cin >> N;
	rep(i,N){
		int a;
		cin >> a;
		nums.pb(a);
	}
	cout << dfs(1,nums[0]) << endl;
	return 0;
}