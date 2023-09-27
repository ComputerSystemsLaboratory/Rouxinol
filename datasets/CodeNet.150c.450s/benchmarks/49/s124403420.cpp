#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
#define loop(i,a,b) for(int i=(a);i<ull(b);++i)
#define rep(i,n) loop(i,0,n)
#define all(a) (a).begin(), (a).end()

const double eps = 1e-10;
const double pi  = acos(-1.0);
const double inf = (int)1e8;

int main(){
	int n;
	while(cin >> n, n){
		vector<int> v(n);
		int ma = -1, mi = inf;
		bool a = true, b = true;
		for(int i=0; i < n; i++){
			cin >> v[i];
			if(ma < v[i]) ma = v[i];
			if(v[i] < mi) mi = v[i];
		}
		int sum = 0;
		rep(i, v.size()){
			if(ma == v[i] && a){a = false; continue;}
			if(mi == v[i] && b){b = false; continue;}

			sum += v[i];
		}
		cout << sum/(v.size()-2) << endl;
	}
}