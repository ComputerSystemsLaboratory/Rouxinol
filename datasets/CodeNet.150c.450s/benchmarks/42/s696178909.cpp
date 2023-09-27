#include<cstdio>
#include<iostream>
#include<vector>
#include<string>
#include<queue>
#include<algorithm>
#define P pair<string,int>
using namespace std;

int main() {
	int a, b;
	scanf("%d%d", &a, &b);
	queue<P>Q;
	for (int c = 0; c < a; c++) {
		string d; int e;
		cin >> d;
		scanf("%d", &e);
		Q.push(P(d, e));
	}
	int s = 0;
	while (Q.size()) {
		P h = Q.front();
		Q.pop();
		int g = min(b, h.second);
		s += g;
		h.second -= g;
		if (h.second) {
			Q.push(h);
		}
		else {
			cout << h.first << " " << s << endl;
		}
	}
}