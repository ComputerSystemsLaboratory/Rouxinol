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

	int n;
	cin >> n;
	vector<string> u(n);
	rep(i, n) cin >> u[i];
	int m;
	cin >> m;
	bool open = 0;
	rep(i, m){
		string t;
		cin >> t;
		bool exist = false;
		rep(i, n) if(t == u[i]) exist = true;
		if(!exist) cout << "Unknown " << t << endl;
		else{
			if(open) cout << "Closed by " << t << endl;
			else cout << "Opened by " << t << endl;
			open = !open;
		}
		
	}
	
	
	return 0;
}