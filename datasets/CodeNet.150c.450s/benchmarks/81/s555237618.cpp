#include<iostream>
#include<algorithm>
#include<string.h>
#include<set>
#define MAX_N 50
#define INF 10000
using namespace std;
int d[MAX_N][MAX_N];
int N;
void floyed(int  X) {
	for (int k = 0; k<X; k++) {
		for (int i = 0; i<X; i++) {
			for (int j = 0; j<X; j++) {
				d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
			}
		}
	}
}
int main() {
	while (true) {
		set<int> s;
		cin >> N;
		if (N <= 0)
			break;
		for (int i = 0; i<MAX_N; i++) {
			for (int j = 0; j<MAX_N; j++) {
				d[i][j] = INF;
				if (i == j)
					d[i][j] = 0;
			}
		}
		
		for (int i = 0; i<N; i++) {
			int from, to, costs;
			cin >> from >> to >> costs;
			d[from][to] = costs;
			d[to][from] = costs;
			s.insert(to);
			s.insert(from);
		}
		floyed(s.size());
		int misum = INF;
		int no;
		for (int i = 0; i<s.size(); i++) {
			int sum = 0;
			for (int j = 0; j<s.size(); j++) {
				if (i != j&&d[i][j]!=INF)
					sum += d[i][j];
			}
			if (sum < misum) {
				misum = sum;
				no = i;
			}
		}
	
		cout << no<<" "<<misum << endl;
		
	}
	
}
