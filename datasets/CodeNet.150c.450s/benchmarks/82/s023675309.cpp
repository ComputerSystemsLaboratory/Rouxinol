#include<iostream>
#include<string>
using namespace std;
using UL = unsigned int;
using LL = long long;
using ULL = unsigned long long;
#define rep(i,n) for(UL i=0; i<n; i++)

UL to[3][6] = {
	{ 4, 0, 2, 3, 5, 1 },
	{ 2, 1, 5, 0, 4, 3 },
	{ 0, 2, 4, 1, 3, 5 }
};

UL C[6];
UL X[64][6];

int main(){
	rep(i, 6) cin >> C[i];
	rep(i, 6) X[0][i] = C[i];
	rep(a1, 4){
		if (a1) rep(i, 6) X[a1 * 16][i] = X[a1 * 16 - 16][to[0][i]];
		rep(a2, 4){
			if (a2) rep(i, 6) X[a1 * 16 + a2 * 4][i] = X[a1 * 16 + a2 * 4 - 4][to[1][i]];
			rep(a3, 4){
				if (a3) rep(i, 6) X[a1 * 16 + a2 * 4 + a3][i] = X[a1 * 16 + a2 * 4 + a3 - 1][to[2][i]];
			}
		}
	}
	UL Q; cin >> Q;
	rep(q, Q){
		UL x0, x1; cin >> x0 >> x1;
		UL p = 0;
		rep(i, 64){
			if (X[i][0] == x0 && X[i][1] == x1) p = i;
		}
		cout << X[p][2] << endl;
	}
	return 0;
}
