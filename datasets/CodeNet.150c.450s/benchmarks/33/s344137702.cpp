#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <vector>
#include <deque>
#include <list>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>
#include <cstring>
#include <cctype>
#include <sstream>
#include <set>
#include <map>
#include <queue>
#include <complex>
using namespace std;

int main() {
	int x, y, s;
	while(cin >> x >> y >> s, x|y|s) {
		int ans=0;
		for(int i=1; i<s; i++) {
			int a = i*(100+x)/100;
			int b = ceil((s-a)*100.0/(100+x));
			if(b <= 0 || a+b*(100+x)/100 != s) continue;
			ans = max(ans, i*(100+y)/100+b*(100+y)/100);
		}
		cout << ans << endl;
	}
	return 0;
}