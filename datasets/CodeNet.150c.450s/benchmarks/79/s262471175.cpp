#include <cstdio>
#include <vector>
#include <algorithm>

#define rep(i, n) for(int i = 0; i < (n); ++i)

using namespace std;

typedef vector<int> V;

int n, r;
V x;

int main(){
	while(scanf("%d%d", &n, &r), n){
		rep(i, n){
			x.push_back(n - i);
		}
		
		rep(i, r){
			int p, c;
			scanf("%d%d", &p, &c);
			V::iterator a = x.begin() + p - 1;
			V::iterator b = a + c;
			vector<int> y(a, b);
			x.erase(a, b);
			x.insert(x.begin(), y.begin(), y.end());
		}
		printf("%d\n", x[0]);

		x.clear();
	}
	return 0;
}