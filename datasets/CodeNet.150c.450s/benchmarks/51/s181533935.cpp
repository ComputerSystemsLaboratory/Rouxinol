#include <bits/stdc++.h>
#define rep(i,n) for(ll i=0;i<(n);++i)
#define all(a) (a).begin(),(a).end()
using namespace std;
using Graph = vector<vector<int>>;
typedef pair<int,int> P;
typedef long long ll;

int main(){
	vector<int> a(28); rep(i,28) cin >> a[i];

	rep(i,30){
		bool jud = true;
		rep(j,28){
			if(a[j] == i+1) jud = false;
		}
		if(jud) cout << i+1 << endl;
	}
}
