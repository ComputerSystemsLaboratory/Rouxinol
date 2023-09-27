#include<iostream>
#include<vector>

using namespace std;

//define
#define ALL(a) a.begin(),a.end()
#define REP(i,n) for(int i=0;i<n;i++)
#define RREP(i,n) for(int i=n-1;i>=0;i--)
#define debug(x) if(1)cout<<#x<<":"<<x<<endl;
#define DEBUG(x) if(1)cout<<#x<<":"<<x<<endl;
#define ll long long

//constant
const int MOD = 1000000009;
//const int INF = INT_MAX / 3;

//typedef
typedef vector<int> vi;
typedef vector<vector<int>> vvi;

int main() {
	int n, r;
	while (cin >> n >> r, n) {
		vi st(n);
		REP(i, n)
			st[i] = n-i ;

		REP(i, r) {
			vi sw(n);
			REP(i, n)
				sw[i] = st[i];
			int p, c;
			cin >> p >> c;
			REP(j, c)
				sw[j] = st[p-1  + j];
			REP(j, p-1)
				sw[j + c] = st[j];


			REP(i, n)
				st[i] = sw[i];

		}

		cout << st[0] << endl;
	}

	return 0;
}