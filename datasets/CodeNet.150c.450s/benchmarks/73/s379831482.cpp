#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <climits>
#include <cfloat>
#include <ctime>

#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
#include <complex>

typedef long long ll;
typedef unsigned long long ull;

#define FOR(i,n) for(int i = 0; i < (n); i++)
#define ten(x) ((int)1e##x)

using namespace std;

int main(){
	int n; cin >> n;
	int q; cin >> q;
	vector<int> A(n,0);
	int interval = sqrt(n);
	vector<int> B(n / interval + 1,0);

	FOR(i,q){
		int com, x, y; cin >> com >> x >> y;
		if(com == 0){
			x--;
			int s = x/interval;
			B[s] -= A[x];
			A[x] += y;
			B[s] += A[x];
		}
		if(com == 1){
			x--;y--;
			int j = x;
			int sum = 0;
			// cout << "fin:"<< x << " " << y << endl;
			// FOR(ii,B.size()) cout << B[ii] << " ";
			// cout << endl;
			// FOR(ii,A.size()) cout << A[ii] << " ";
			// cout << endl;
			while(j <= y){
				// cout << j << " ";
				if(j % interval == 0 && y - j >= interval - 1){
					sum += B[j/interval];
					j += interval;
				}
				else{
					sum += A[j];
					j++;
				}
			}
			// cout << "ans:" << tmp << endl << endl;
			cout << sum << endl;
		}
	}
	return 0;
}