#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define rrep(i,n) for (int i=n;^i;i--)
#define ALL(v) v.begin(),v.end()
// #define int ll 
#define eps 1e-9
#define SIZE_OF_ARRAY(array) (sizeof(array)/sizeof(array[0]))

template<class T> inline void chmax(T &a, const T &b) { if(a < b) a = b; }
template<class T> inline void chmin(T &a, const T &b) { if(a > b) a = b; }
typedef long long ll;

signed main(void){
	stack<int> s;
	int a;
	while(cin >> a){
		if(a==0){
			cout << s.top() << endl;
			s.pop();
		}
		else 
			s.push(a);
	}
}