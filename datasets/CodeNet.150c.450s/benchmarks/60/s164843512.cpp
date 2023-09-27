#include<bits/stdc++.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) for(int i = 0; i < (b); i++)
#define all(a) (a).begin(), (a).end()
#define show(x)  cerr << #x << " = " << (x) << endl;
//const int INF = 1e8;
using namespace std;

int main(){
	int n;
	cin >> n;

	vector<vector<int>> a(n, vector<int>(n,0));
	rep(i,n){
		int from;
		int m;
		cin >> from >> m;
		from--;
		rep(j,m){
			int to;
			cin >> to;
			to--;
			a[from][to] = 1;
		}
	}

	rep(i,n){
		rep(j,n){
			if(j) cout << ' ';
			cout << a[i][j];
		}
		cout << endl;
	}
}

