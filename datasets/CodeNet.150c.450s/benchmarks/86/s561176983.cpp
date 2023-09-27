#include<map>
#include<set>
#include<list>
#include<cmath>
#include<queue>
#include<stack>
#include<cstdio>
#include<string>
#include<vector>
#include<complex>
#include<cstdlib>
#include<cstring>
#include<climits>
#include<numeric>
#include<sstream>
#include<iostream>
#include<algorithm>
#include<functional>
#include<iomanip>
#include<cctype>

#define MP make_pair
#define PB push_back
#define REP(i,n) for(int i=0;i<(n);i++)

using namespace std;

typedef long long LL;
typedef vector<int> VI;

const int DX[] = { 1, 0, -1, 0 }, DY[] = { 0, -1, 0, 1 };

int main(){
	int n, m, p,x,y=0;
	VI X;
	while (1){
		cin >> n >> m >> p;
		if (n == 0 && m == 0 && p == 0)
			break;
		for (int i = 0; i < n; i++){
			cin >> x;
			y += x;
			X.PB(x);
		}
		if (X[m - 1] == 0)
			cout << 0 << endl;
		else
			cout << (int)(((y *100) - (y * 100 * ((float)p / 100)))/ X[m - 1]) << endl;
		y = 0;
		X.clear();
	}
	return 0;
}