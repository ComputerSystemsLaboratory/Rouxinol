#include<bits/stdc++.h>
using namespace std;
 
#define REP(i,s,n) for(int i=s;i<n;++i)
#define rep(i,n) REP(i,0,n)
#define SORT(c) sort((c).begin(),(c).end())
#define IINF INT_MAX
#define LLINF LLONG_MAX
#define DEBUG false
 
typedef long long ll;
typedef pair<int, int> ii;

int main() {
	
	vector<string> v(10);
	v[1] = ".,!? ";
	v[2] = "abc";
	v[3] = "def";
	v[4] = "ghi";
	v[5] = "jkl";
	v[6] = "mno";
	v[7] = "pqrs";
	v[8] = "tuv";
	v[9] = "wxyz";
	
	int n;
	cin >> n;
	rep(i, n){
		string s, ans;
		cin >> s;
		rep(j, s.size()){
			int cnt = 0;
			if(s[j] == '0') continue;
			while(s[j] == s[j+1]){
				j++;
				cnt++;
			}
			int num = (int)(s[j] - '0');
			ans += v[num][cnt % v[num].size()]; 
		}
		cout << ans << endl;
	}

	return 0;
}