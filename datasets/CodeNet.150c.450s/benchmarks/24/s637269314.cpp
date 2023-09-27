// AOJ 2019

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
	int n, m;
	while (cin >> n >> m, n || m){
		vector < pair <int, int> > data;
		int d, p;
		int ret = 0;
		for (int i = 0; i < n; i++){
			cin >> d >> p;
			data.push_back(make_pair(p, d));
			ret += (d * p);
		}
		sort(data.rbegin(), data.rend());
/*
		for (int i = 0; i < data.size(); i++){
			cout << data[i].first << " " << data[i].second << endl;
		}
*/
		for (int i = 0; i < (int)data.size(); i++){
			if (m < data[i].second){
				ret -= (m * data[i].first);
				m = 0;
			}
			else {
				ret -= (data[i].first * data[i].second);
				m -= data[i].second;
			}
		}

		cout << ret << endl;
	}
}