#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int s[10010];

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;

	for(int i = 0; i < n; ++i){
		cin >> s[i];
	}

	int q;
	cin >> q;

	int ans = 0;
	for(int i = 0; i < q; ++i){
		int t;
		cin >> t;
		for(int j = 0; j < n; ++j){
			if(t == s[j]){
				++ans;
				break;
			}
		}
	}

	cout << ans << endl;

	return 0;
}