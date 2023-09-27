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

	vector<int> a(4);
	vector<int> b(4);
	
	while(cin >> a[0]){
		vector<bool> used(10, false);
		int hit = 0, blow = 0;
		used[a[0]] = true;
		REP(i, 1, 4){
			cin >> a[i];
			used[a[i]] = true;
		}
		rep(i, 4){
			cin >> b[i];
			if(a[i] == b[i]) hit++;
			else if(used[b[i]]) blow++;
		}
		
		cout << hit << " " << blow << endl;
		
	}

	
	return 0;
}