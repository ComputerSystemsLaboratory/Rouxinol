#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <iostream>
#include <map>
#include <set>
#include <list>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <queue>
#include <iomanip>

#define SIZE 101
#define INF 100000000

using namespace std;


typedef pair<int, int> P;




int main()
{
	int n;
	pair<int, P> p;
	vector<pair<int, P>> v;

	for (int i = 1; i <= 150; i++) {
		for (int j = 1; j < i; j++) {
			v.push_back(pair<int, P>(i * i + j * j, P(j, i)));
		}
	}

	sort(v.begin(), v.end());

	while (true) {
		int h, w, rh, rw;
		int d; 
		cin >> h >> w;
		if (h == 0 && w == 0) break;
		d = h * h + w * w;

		pair<int, P> q(d, P(h, w));

		for (int i = 0; i < v.size(); i++) {
			if (v[i] > q) {
				//if(v[i].first == d) i += 1;
				cout << v[i].second.first << " " << v[i].second.second << endl;
				break;
			}
			// cerr << v[i].second.first << " " << v[i].second.second << endl;
		}
	}
	return (0);
}