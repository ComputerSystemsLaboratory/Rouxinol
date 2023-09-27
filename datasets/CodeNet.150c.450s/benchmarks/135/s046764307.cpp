#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <utility>
#include <queue>
#include <set>
#include <map>

using namespace std;
typedef  long long ll;
typedef pair<int,int> PII;
typedef vector<int> VI;
typedef vector<VI> VVI;
#define  MP make_pair
#define  PB push_back
#define inf  1000000007

int main(){
	int n,m;
	while(1){
		map<int,int>mp;
		cin >> n >> m;
		if(n==0)break;
		vector<int>h(n),w(m);
		for(int i=0;i<n;i++){
			cin >> h[i];
		}
		for(int i=0;i<m;i++){
			cin >> w[i];
		}
		for(int i=0;i<n;i++){
			int tmp = 0;
			for(int j=i;j<n;j++){
				tmp += h[j];
				mp[tmp]++;
			}
		}
		ll ans = 0;
		for(int i=0;i<m;i++){
			int tmp = 0;
			for(int j=i;j<m;j++){
				tmp += w[j];
				ans += mp[tmp];
			}
		}
		cout << ans << endl;
	}
	return 0;
}