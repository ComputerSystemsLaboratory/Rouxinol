#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <utility>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#define INF 10000000
#define REP(i, n) for(int i = 0;i < (n);i++)
#define all(n) n.begin(),n.end()

using namespace std;

using ll = long long;
using PII = pair<int, int>;

class BIT{
	vector<ll> bit;
	int n;
public:
	BIT(int n_){
		n = n_;
		REP(i, n){
			bit.push_back(0);
		}
	}

	void add(int i, int x){
		while(i <= n){
			bit[i] += x;
			i += i & -i;
		}
	}

	int getSum(int i){
		int s = 0;
		while(i > 0){
			s += bit[i];
			i -= i & -i;
		}
		return s;
	}
};

int main(void){
	int n, q;
	cin >> n >> q;
	BIT bit(n);
	REP(i, q){
		int com, x, y;
		cin >> com >> x >> y;
		if(com == 0){
			bit.add(x, y);
		}else{
			cout << bit.getSum(y)-bit.getSum(x-1) << endl;
		}
	}
}