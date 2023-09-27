#include <bits/stdc++.h>
#define int long long
using namespace std;

int A[200];
string s;

set<int> S;
bool sub(void){
	S.clear();
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> A[i];
	}
	cin >> s;
	for(int i = n - 1; i >= 0; i--){
		int x = A[i];
//		cout << "process: ";
//		cout << x << endl;
		for(auto ptr = S.rbegin(); ptr != S.rend(); ptr++){
			if(x != 0 && __builtin_clzll(*ptr) == __builtin_clzll(x)){
//				cout << x << ' ' << *ptr << endl;
				x ^= *ptr;
			}
		}
		
//		cout << "round ";
//		cout << i << ' ' << x <<  endl;
//		for(auto j : S){
//			cout << j << ' ';
//		}
//		cout << endl;
		// cout << x << endl;
		if(x == 0){
			continue;
		}else{
			if(s[i] == '1'){
				return 1;
			}
			
			S.insert(x);
		}
	}
	return 0;
}

int32_t main(){
	int t;
	cin >> t;
	while(t--){
		bool res = sub();
		cout << res << endl;
	}
}