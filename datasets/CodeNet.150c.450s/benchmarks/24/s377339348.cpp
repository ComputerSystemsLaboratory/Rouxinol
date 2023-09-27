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

using namespace std;

int n, p_sum;
long long int m;
long long int d[100001];
vector<pair <int, int> > p(10001);

int main()
{
	while(1){
		cin >> n >> m;
		if(n == 0 && m == 0) break;
		p_sum = 0;
		for(int i = 0; i < n; i++){
			p[i].second = i;
			cin >> d[i] >> p[i].first;
			p_sum += (p[i].first) * d[i];
			p[i].first = -p[i].first;
		}
		sort(p.begin(), p.begin()+n);
		for(int i = 0; i < n; i++){
			if(m == 0) break;
			int min_m_d = min(d[p[i].second], m);
			p_sum += (p[i].first) * min_m_d;
			m -= min_m_d;
		}
		cout << p_sum << endl;
	}
	return 0;
}