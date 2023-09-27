#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <cstring>
#include <string>
#include <queue>
#include <cmath>
#include <map>

#define rep(i,n) for(int i = 0; i < (n); i++)
#define all(v) (v).begin(), (v).end()
#define rev(v) (v).rbegin(), (v).rend()
#define MP make_pair
#define X first
#define Y second

using namespace std;

typedef vector<int> vi;
typedef pair<int, int> P;
typedef long long ll;

int main(){
	int n, a, b, c, x;
	while(cin >> n >> a >> b >> c >> x, n|a|b|c|x){
		vector<int> y(n);
		rep(i, n) cin >> y[i];		

		int r = x;
		int idx = 0;
		int ans = -1;
		rep(i, 10001){
			if(y[idx] == r) idx++;
			if(idx == n){
				ans = i;
				break;
			}
			r = (a*r+b)%c;
		}
		cout << ans << endl;
	}

	return 0;
}