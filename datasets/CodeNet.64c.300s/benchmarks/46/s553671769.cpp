#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <cstring>
#include <climits>
#include <algorithm>
#include <map>
#include <set>
#include <stack>
#include <vector>
#include <string>
using namespace std;

#define rep(i,n) for(int i=0; i<n; i++)
#define repa(i,s,e) for(int i=s; i<=e; i++)
#define repd(i,s,e) for(int i=s; i>=e; i--)

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

int a, d, n;
int p[1000001];

int solve() {
	int c = 0;
	for(int i=a; i<=1000000; i+=d) {
		if(p[i] == 1) c++;
		if(c == n) {
			return i;
		}
	}
	return -1;
}

int main() {
	// compute prime
	fill(p, p+1000001, 1);
	p[0] = p[1] = 0;
	repa(i,2,1000000) {
		if(p[i] == 1) {
			int j = i << 1;
			while(j <= 1000000) {
				p[j] = 0;
				j += i;
			}
		}
	}

	while(cin>>a>>d>>n, a|d|n) {
		cout << solve() << endl;
	}
}