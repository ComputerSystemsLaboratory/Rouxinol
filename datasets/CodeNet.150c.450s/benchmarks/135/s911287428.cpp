#include <cstdio>
#include <iostream>
#include <cmath>
#include <ctype.h>
#include <string> 
#include <sstream>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <map>
#include <queue>
#include <utility>
#include <vector>
#include <set>
#include <list>
  
using namespace std;

int main()
{
	int n, m;
	while(1){
		cin >> n >> m;
		if(n == 0 && m == 0) break;
		int h[1500], w[1500];
		int sumh = 0, sumw = 0;
		for(int i = 0; i < n; i++){
			cin >> h[i];
			sumh += h[i];
		}
		for(int i = 0; i < m; i++){
			cin >> w[i];
			sumw += w[i];
		}
		int resulth[sumh + 1], resultw[sumw + 1];
		for(int i = 0; i < sumh + 1; i++){
			resulth[i] = 0;
		}
		for(int i = 0; i < sumw + 1; i++){
			resultw[i] = 0;
		}
		for(int i = 0; i < n; i++){
			int tmp = 0;
			for(int j = i; j < n; j++){
				tmp += h[j];
				resulth[tmp]++;
			}
		}
		for(int i = 0; i < m; i++){
			int tmp = 0;
			for(int j = i; j < m; j++){
				tmp += w[j];
				resultw[tmp]++;
			}
		}
		int ans = 0;
		for(int i = 1; i < min(sumh, sumw) + 1; i++){
			ans += resultw[i] * resulth[i];
		}
		cout << ans << endl;
	}
	return 0;
}