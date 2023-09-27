#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <cstring>
#include <string>
#include <queue>
#include <cmath>

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


int check(int state, vector<vi> a, const vector<vi> &b){
	rep(i, a.size()){
		if((state>>i)&1){
			a[i] = b[i];
		}
	}
	int sum = 0;
	rep(j, a[0].size()){
		int cnt0 = 0, cnt1 = 0;
		rep(i, a.size()){
			if(a[i][j])cnt1++;
			else cnt0++;
		}
		sum += max(cnt0, cnt1);
	}

	return sum;
}

int main(){
	//freopen("test.txt", "r", stdin);
	int R, C;
	while(cin >> R >> C, R|C){
		vector<vi> a(R, vi(C, 0)), b(R, vi(C, 0));
		rep(i, R) rep(j, C){
			cin >> a[i][j];
			b[i][j] = !a[i][j];
		}

		int ans = 0;
		int state = 0;
		while((state>>R) != 1){
			ans = max(ans, check(state, a, b));
			state++;
		}
		cout << ans << endl;
	}

	return 0;
}