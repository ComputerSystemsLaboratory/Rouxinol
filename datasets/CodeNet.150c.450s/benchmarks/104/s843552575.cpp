#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <deque>
#include <list>
#include <string>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

int n;
int w;
int line[31][2];
int perm[31];

int main() {
	cin >> n;
	cin >> w;
	for (int i = 0; i < w; i++) {
		scanf("%d,%d", &line[i][0], &line[i][1]);
	}

	for (int i = 1; i <= n; i++) {
		int pt = i;
		for (int j = 0; j < w; j++) {
			if (line[j][0] == pt) pt = line[j][1];
			else if (line[j][1] == pt) pt = line[j][0];
		}
		perm[pt] = i;
	}

	for (int i = 1; i <= n; i++) {
		cout << perm[i] << endl;
	}

	return 0;
}

/*@@@@@@@@@@@@@@@@@@@@@@@@@*/
/*@                       @*/
/*@ debug output erased ? @*/
/*@                       @*/
/*@@@@@@@@@@@@@@@@@@@@@@@@@*/