#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
const int MAX = 1e6 + 10;
const int MOD = 1e9 + 7;
const int oo = 1e9;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	#define endl '\n'
	int T; cin >> T;
	while(T--){
		int n; cin >> n;
		vector<i64> A(n);
		for(int i = 0; i <n; i++)cin >> A[i];
		string p;
		cin >> p;
		vector<i64> basis;
		int ans = 0;
		for(int i = n - 1; i >= 0; i--){
			i64 c = A[i];
			for(auto b: basis) c= min(c, c ^ b);

			if(p[i] == '1'){
				if(c > 0){
					ans = 1;break;
				}
			}
			else{
				if(c > 0)basis.push_back(c);
			}
		}
		cout << ans << endl;

		
	}
}
