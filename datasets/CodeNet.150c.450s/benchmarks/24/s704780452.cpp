#include <iostream>
#include <iomanip>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <functional>
#include <string>
#include <algorithm>
#include <string>
#include <climits>
#include <utility>

#define REP(i, n) for (int (i) = 0; (i) < (int)(n); (i)++)
#define REG(i, a, b) for (int (i) = ((int)(a)); (i) < ((int)(b)); i++)
#define ALL(V) (V).begin(), (V).end()
#define PRINT(STR) cout << (STR) << endl
#define ROUNDED(N) fixed << setprecision(N)
#define SPACE " "

typedef long long ll;
using namespace std;

int nextInt() { int n; cin >> n; return n; }
double nextDouble() { double d; cin >> d; return d; }
string nextString() { string str; cin >> str; return str; }

int main() {
	cin.tie(0); //?????±?????????????????????
	ios::sync_with_stdio(false); //printf??¨??±??????????????????

	int n,m;
	while(cin>>n>>m,n){
		vector<pair<int,int>> load(n);
		REP(i,n)cin >> load[i].second >> load[i].first;
		sort(load.begin(),load.end());
		reverse(load.begin(),load.end());
		for(int i = 0;m>0&&i<n;i++){
			if(m-load[i].second>=0){//second????????¢
				m -= load[i].second;
				load[i].second = 0;
			}else{
				load[i].second -= m;
				m = 0;
			}
		}
		int ans=0;
		REP(i,n)ans += load[i].first * load[i].second;
		cout << ans << endl;
	}
	return 0;
}