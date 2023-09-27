#include <cstdio>
#include <iostream>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
string u[256];
int main(){
	int n,m;
	cin >> n;
	bool op=0;
	rep(i,n) cin >> u[i];
	cin >> m;
	rep(i,m){
		string s;
		cin >> s;
		bool ok=false;
		rep(j,n){
			if(s==u[j]){
				if(op) cout << "Closed by " << s << endl;
				else cout << "Opened by " << s << endl;
				op=!op;
				ok=true;
				break;
			}
		}
		if(!ok) cout << "Unknown " << s << endl;
	}
	return 0;
}