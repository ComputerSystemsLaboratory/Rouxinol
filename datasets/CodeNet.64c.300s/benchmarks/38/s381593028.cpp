#include<bits/stdc++.h>
using namespace std;
 
#define REP(i,s,n) for(int i=s;i<n;++i)
#define rep(i,n) REP(i,0,n)
#define SORT(c) sort((c).begin(),(c).end())
#define IINF INT_MAX
#define LLINF LLONG_MAX
 
typedef long long ll;
typedef pair<int, int> ii;

#define EPS 1e-8

int main(){
	
	int n;
	cin >> n;
	while(n--){
		int l = 0, r = 0;
		bool flag = true;
		rep(i, 10){
			int a;
			cin >> a;
			if(a > l) l = a;
			else if(a > r) r = a;
			else flag = false;
		}
		if(flag) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	
	return 0;
}