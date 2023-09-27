#include <bits/stdc++.h>
#define rep(i,a,n) for(int i=a;i<n;i++)
#define repb(i,a,b) for(int i=a;i>=b;i--)
#define all(a) a.begin(),a.end()
#define o(a) cout<<a<<endl
#define int long long
#define fi first
#define se second
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;

string t[10] = { "",".,!? ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz" };

signed main() {
	int n;
	cin >> n;
	rep(i, 0, n) {
		string s, ans = "";
		cin >> s;
		int now = 0, cnt = 0;
		rep(i, 0, s.size()) {
			if (s[i] =='0') {
				if (now == 0) continue;
				cnt %= t[now].size();
				ans += t[now][cnt];
				now = 0;
				cnt = 0;
			}
			else if (now == 0) {
				now = s[i] - '0';
				cnt = 0;
			}
			else if (now == s[i] - '0') {
				cnt++;
			}
			//cout << i << " " << now << " " << cnt << endl;
		}
		cout << ans << endl;
	}
}