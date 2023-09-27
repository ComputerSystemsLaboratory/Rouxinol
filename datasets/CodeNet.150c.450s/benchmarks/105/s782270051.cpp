# include <bits/stdc++.h>
using namespace std;
namespace Base{
	# define mr make_pair
	typedef long long ll;
	typedef double db;
	const int inf = 0x3f3f3f3f, INF = 0x7fffffff;
	const ll  infll = 0x3f3f3f3f3f3f3f3fll, INFll = 0x7fffffffffffffffll;
	template<typename T> void read(T &x){
    	x = 0; int fh = 1; double num = 1.0; char ch = getchar();
		while (!isdigit(ch)){ if (ch == '-') fh = -1; ch = getchar(); }
		while (isdigit(ch)){ x = x * 10 + ch - '0'; ch = getchar(); }
	    if (ch == '.'){
	    	ch = getchar();
	    	while (isdigit(ch)){num /= 10; x = x + num * (ch - '0'); ch = getchar();}
		}
		x = x * fh;
	}
	template<typename T> void chmax(T &x, T y){x = x < y ? y : x;}
	template<typename T> void chmin(T &x, T y){x = x > y ? y : x;}
}
using namespace Base;

const int N = 210;
ll a[N], b[N];
char s[N];
int n, m, t;
bool add(ll x){
	for (int i = 1; i <= m; i++){
		if (x > b[i]) swap(x, b[i]);
		if ((x ^ b[i]) < x) x ^= b[i];
	}
	if (x == 0) return 0;
	b[++m] = x;
	return 1;
}
int main(){
	read(t);
	while (t--){
		read(n); m = 0;
		for (int i = 1; i <= n; i++) read(a[i]);
		scanf("\n%s", s + 1);
		bool flag = true;
		for (int i = n; i >= 1; i--)
			if (add(a[i]) && s[i] == '1')
				flag = false;
		if (flag == false)
			cout << 1 << endl;
			else cout << 0 << endl; 
	} 
    return 0;
}
