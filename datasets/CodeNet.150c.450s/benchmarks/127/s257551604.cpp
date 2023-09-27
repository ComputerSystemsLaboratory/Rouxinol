
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <cstring>
#include <cctype>
#include <complex>
#include <iostream>
#include <sstream>
#include <algorithm>
#include <functional>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <bitset>
#include <numeric>
using namespace std;
const int dx[]={1,0,-1,0,1,-1,-1,1};
const int dy[]={0,1,0,-1,1,1,-1,-1};
const int INF = 1<<30;
const int EPS = 1e-15;
#define PB push_back
#define fi first
#define se second
#define ll long long
#define reps(i,j,k) for(int i = (j); i < (k); i++)
#define rep(i,j) reps(i,0,j)
#define MOD 1000000007
typedef pair<int,int> Pii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int > Pii;
int main(){
	int m;
	scanf("%d",&m);
	while(m--){
		map<string,int> memo;
		string str;
		cin >> str;
		reps(i,1,str.size()){
			string s(str,0,i);
			string e(str,i,str.size());
			string r_s,r_e;
			r_s = s;
			r_e = e;
			reverse(r_s.begin(),r_s.end());
			reverse(r_e.begin(),r_e.end());
			memo[s+e]++;
			memo[e+s]++;
			memo[s+r_e]++;
			memo[r_e+s]++;
			memo[r_s+e]++;
			memo[e+r_s]++;
			memo[r_s+r_e]++;
			memo[r_e+r_s]++;
		}
		printf("%d\n",memo.size());
	}
	return 0;
}