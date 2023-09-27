#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
#include <string>
#include <utility>
using namespace std;

int n,m;
pair<int,int> d[10010];

int main(){
	while (1){
		cin >> n >> m;
		if (n == 0) break;
		for (int i = 0; i < n; i++){
			cin >> d[i].second >> d[i].first;
		}
		int exp = 0;
		int dist = 0;
		for (int i = 0; i < n; i++){
			exp += d[i].second * d[i].first;
			dist += d[i].second;
		}
		if (m >= dist) cout << 0 << endl;
		else{
			sort(d, d + n);
			reverse(d, d + n);
			int i = 0;
			while (m > 0){
				if (d[i].second == 0)i++;
				exp -= d[i].first;
				d[i].second -= 1;
				m -= 1;
			}
			cout << exp << endl;
		}
	}
	return 0;
}