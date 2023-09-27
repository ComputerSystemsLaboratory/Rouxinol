#include <iostream>
#include <vector>
#include <map>

using namespace std;
typedef long long ll;

int main(){
	while(true){
		int n, m;
		cin >> n >> m;
		if(n == 0 && m == 0){ break; }
		vector<int> h(n), w(m);
		for(int i = 0; i < n; ++i){ cin >> h[i]; }
		for(int j = 0; j < m; ++j){ cin >> w[j]; }
		map<int, int> mp;
		for(int i = 0; i < n; ++i){
			int sum = 0;
			for(int j = i; j < n; ++j){
				sum += h[j];
				++mp[sum];
			}
		}
		ll answer = 0;
		for(int i = 0; i < m; ++i){
			int sum = 0;
			for(int j = i; j < m; ++j){
				sum += w[j];
				answer += mp[sum];
			}
		}
		cout << answer << endl;
	}
	return 0;
}