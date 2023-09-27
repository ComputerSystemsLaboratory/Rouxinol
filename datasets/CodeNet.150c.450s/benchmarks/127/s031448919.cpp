#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

bool dx[]{ 1,1,0,0 }, dy[]{ 0,1,0,1 };
int main() {
	int m; scanf("%d", &m);
	rep(k, m) {
		set<string>se;
		string s; cin >> s;
		rep(i, s.size() - 1) {
			string s1, s2;
			rep(j, i + 1)s1 += s[j];
			for (int j = i + 1; j < s.size(); j++)s2 += s[j];
			rep(i, 4) {
				string s3 = s1, s4 = s2;
				if (dx[i])reverse(s3.begin(), s3.end());
				if (dy[i])reverse(s4.begin(), s4.end());
				se.insert(s3 + s4);
				se.insert(s4 + s3);
			}
		}
		printf("%d\n", se.size());
	}
}