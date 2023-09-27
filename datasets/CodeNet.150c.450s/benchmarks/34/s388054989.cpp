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

int n;
int memo[32];
int dfs(int now){
	if(now > n)return false;
	if(now == n)return true;
	if(memo[now] != -1)return memo[now];
	int sum = dfs(now+1) + dfs(now+2) + dfs(now+3);
	return memo[now] = sum;
}

int main(void){
	while(cin >> n, n){
		fill_n(memo, 32, -1);
		cout << dfs(0)/3650+1 << endl;
	}

	return 0;
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