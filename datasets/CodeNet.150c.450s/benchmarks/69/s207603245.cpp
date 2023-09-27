#include<cmath>
#include<stack>
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
int a[20];
stack<int> s1,s2;

bool dfs(int pos){
	if(pos == 10 + 1) return true;
	
	int v = a[pos];
	if(s1.empty() || v >= s1.top()){
		s1.push(v);
		if(dfs(pos + 1)) return true;
		s1.pop();
	}
	if(s2.empty() || v >= s2.top()){
		s2.push(v);
		if(dfs(pos + 1)) return true;
		s2.pop();
	}
	return false;
}

int main(){
//	freopen("in.txt","r",stdin);
	int t;
	cin >> t;
	for(int i = 1 ; i <= t ;++i){
		for(int j = 1; j <= 10 ; j++)
			cin >> a[j];
		while(! s1.empty()) s1.pop();
		while(! s2.empty()) s2.pop();
		
		bool ans = dfs(1);
		if(ans)	puts("YES");
		else	puts("NO");
	}
	
}