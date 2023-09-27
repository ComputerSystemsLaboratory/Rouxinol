#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <time.h>
#include <math.h>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <algorithm>
#include <iterator>
#include <sstream>
#include <string>
#include <bitset>
using namespace std;
#define FOR(I,F,N) for(int I = F; I < (int)(N); I++)
#define rep(i, n) FOR(i, 0, n)
#define FIN(V) cout<<V<<endl
#define pb push_back
#define INF (1 << 28)

template<typename T>
void remove(vector<T>& vector, unsigned int index){
vector.erase(vector.begin() + index);
}

typedef pair<int, int> P;
typedef long long ll;
typedef priority_queue<int> pq;
int StrToInt(string);
string IntToStr(int);
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int n, ans;
int deal[102];
long long dp[102][21];

long long dfs(int now, long long sum){
	if(now == n-1){
		if(sum == ans)return true;
		else return false;
	}
	if(sum > 20 || sum < 0)return false;
	if(dp[now][sum] != -1)return dp[now][sum];
	return dp[now][sum] = dfs(now+1, sum-deal[now]) + dfs(now+1, sum+deal[now]);
}

int main(void){
	cin >> n;
	fill_n(deal, 102, -1);
	fill_n(*dp, 21*102, -1);

	rep(i, n){
		cin >> deal[i];
	}
	ans = deal[n-1];
	cout << dfs(1, deal[0]) << endl;

}

int StrToInt(string s){
	stringstream ss;
	ss << s;
	int val;
	ss >> val;
	return val;
}
string IntToStr(int i){
	stringstream ss;
	ss << i;
	return ss.str();
}