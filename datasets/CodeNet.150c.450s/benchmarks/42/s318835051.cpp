#include <string>
#include <stdio.h>
#include <math.h>
#include <iostream>
#include <queue>
using namespace std;
int main(void)
{
	queue<pair<string,int>> Q;
	int n, q, x, a, cou = 0, time = 0;
	string name;
	cin >> n >> q;
	for (int i = 0; i < n; i++) {
		cin >> name >> x;
		Q.push(make_pair(name, x));
	}
	while(!(Q.empty())) {
		pair<string, int> p = Q.front(); Q.pop();
		if (p.second > q) {
			Q.push(make_pair(p.first, p.second - q));
			time += q;
		}
		else {
			time += p.second;
			cout << p.first << " " << time << endl;
		}
	}
}