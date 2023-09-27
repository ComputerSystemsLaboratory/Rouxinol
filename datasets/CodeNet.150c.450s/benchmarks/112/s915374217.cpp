#include <iostream>
using namespace std;

#define repi(i,a,b) for(int i=(a);i<(b);i++)
#define rep(i,n) for(int i=0;i<(n);i++)

int main() {
	ios::sync_with_stdio(false);
	
	int n, m;
	
	while(cin>>n,n) {
		char t[256] = {};
		char a, b;
		rep(i, n) {
			cin>>a>>b;
			t[a] = b;
		}
		cin>>m;
		rep(i, m) {
			cin>>a;
			if(t[a]==0)cout<<a;
			else cout<<t[a];
		}
		cout<<endl;
	}
	
	return 0;
}