#include <algorithm>
#include <iostream>
#include <cstdio>
#include <map>
#include <set>
#include <sstream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

typedef pair<int, int> P;
int main() {
	while (true) {
		int h, w;
		cin >> h >> w;
		int mr = h*h+w*w;
		if (!h) break;
		P p = P(1000, 1001);
		for (int i = 1; i < 200; i++) {
			for (int j = i+1; j < 200; j++) {
				if (mr < i*i+j*j || (mr == i*i+j*j && h < i)) {
					int u = p.first*p.first+p.second*p.second;
					if (i*i+j*j < u || (i*i+j*j == u && i < p.first)) {
						p = P(i, j);
					}
				}
			}
		}
		cout << p.first << ' ' << p.second << endl;
	}
}