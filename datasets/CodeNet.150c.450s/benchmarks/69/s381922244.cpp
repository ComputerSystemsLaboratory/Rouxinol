#include<stack>
#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
#define SC(x) scanf("%d",&x);
#define pr(x)  cout << x << endl;
#define mem(arr,v) memset(arr,v,sizeof arr);
#define bug(x) cout << "#x = " << x <<endl;
const int inf = 0x3f3f3f3f;
const int maxn = 1e5 + 5;
typedef long long ll;
using namespace std;
int a[maxn];
stack<int> s[2];

bool dfs(int pos) {
//	bug(pos)
	if(pos == 10) return true;
	int cur = a[pos];
	for(int i = 0; i < 2 ; i++) {
		if(s[i].empty() || s[i].top() <= cur) {
			s[i].push(cur);
			if(dfs(pos + 1)) return true;
			s[i].pop();
		}
	}
	return false;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		for(int i =0 ; i < 2; i++)
			while(!s[i].empty())
				s[i].pop();
		for(int i = 0 ; i < 10 ; i++)
			cin >> a[i];
		if(dfs(0))
			puts("YES");
		else
			puts("NO");
	}
}