#include <bits/stdc++.h>
using namespace std;
#define FOR(I,A,B) for(int I = (A); I < (B); ++I)
#define CLR(mat) memset(mat, 0, sizeof(mat))
typedef long long ll;
const int N=100;

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n,a[N][N];
	CLR(a);
	cin >> n;
	FOR(i,0,n){
		int k,l;
		cin >> k >> l;
		FOR(j,0,l){
			int m;
			cin >> m;
			++a[i][m-1];
		}
	}
	FOR(i,0,n){
		FOR(j,0,n){
			if(j!=0)cout << " ";
			cout << a[i][j];
		}
		cout << endl;
	}

	return 0;
}