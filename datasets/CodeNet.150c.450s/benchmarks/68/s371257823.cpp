#include<bits/stdc++.h>

#define reps(i,j,k) for(int i=j;i<k;i++)
#define rep(i,j) reps(i,0,j)

using namespace std;

typedef vector<int> vi;

int main(){
	
	int n;
	while(cin >> n, n){
		vi v(n);
		rep(i, n) cin >> v[i];
		sort(v.begin(), v.end());
		int m = (1<<29);
		rep(i,n-1){
			m = min(m, v[i+1] - v[i]);
		}
		cout << m << endl;
	}

	return 0;
}