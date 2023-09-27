#include<map>
#include<set>
#include<list>
#include<cmath>
#include<queue>
#include<stack>
#include<cstdio>
#include<string>
#include<vector>
#include<complex>
#include<cstdlib>
#include<cstring>
#include<climits>
#include<numeric>
#include<sstream>
#include<iostream>
#include<algorithm>
#include<functional>
#include<cctype>

#define mp make_pair
#define pb push_back
#define REP(i,a,n) for(int i = a;i < (n);i++)
#define rep(i,n) for(int i = 0;i < (n);i++)
#define all(s) s.begin(), s.end()
#define rall(s) s.rbegin(), s.rend()
#define range(x,min,max) ((min) <= (x) && (x) <= (max))

using namespace std;

typedef long long LL;
typedef vector<int> VI;
typedef vector<vector<int> > VII;
typedef vector<string> VS;
typedef vector<bool> VB;
typedef pair<int,int> PII;

const int DX[]={1,0,-1,0},DY[]={0,-1,0,1};

int n, p;
int P;
VI cnt;

int check_winner(){
	rep(i, cnt.size()){
		if(cnt[i] == P) return i + 1;
	}
	return 0;
}

int solve(){
	P = p;
	int ans;
	rep(i, 1000000){
		rep(j, n){
			if(ans = check_winner()){
				return ans - 1;
			}else if(p == 0){
				p = cnt[j];
				cnt[j] = 0;
			}else{
				p--;
				cnt[j]++;
			}
		}
	}
	return 0;
}

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	while(1){
		cnt.clear();
		cin >> n >> p;
		cnt.resize(n, 0);
		if(n == 0 && p == 0) break;
		
		cout << solve() << endl;
	}
}