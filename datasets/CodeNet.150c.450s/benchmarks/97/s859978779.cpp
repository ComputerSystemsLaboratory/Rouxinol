
#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <algorithm>
#include <sstream>
#include <iostream>
#include <string>

using namespace std;

int main() {

	int dx[] = {-1,0,1,0}, dy[] = { 0,1,0,-1 };

	while (1) {

		int N, m[4] = { 202,202,202,202 }, box[405][405],n[205],d[205];

		cin >> N;
		if (N==0) break;
		for (int i = 1; i < N; i++) {
			cin >> n[i] >> d[i];
		}

		for (int i = 0; i < 405; i++) {
			for (int j = 0; j < 405; j++) {
				box[i][j] = -1;
			}
		}
		box[202][202] = 0;

		for (int i = 1; i < N; i++) {
			
			int x, y;		
			for (int k = 0; k < 405; k++) {
				for (int l = 0; l < 405; l++) {
					if (box[k][l] == n[i]) {
						x = l;
						y = k;
					}
				}
			}

			for (int k = 0; k < 4; k++) {
				if (d[i] == k) {
					box[y+dy[k]][x + dx[k]] = i;
					if (d[i] == 0) m[0] = min(m[0], x + dx[k]);
					if (d[i] == 2) m[2] = max(m[2], x + dx[k]);
					if (d[i] == 1) m[1] = max(m[1], y + dy[k]);
					if (d[i] == 3) m[3] = min(m[3], y + dy[k]);
					break;
				}
			}

		}

		int tate, yoko;
		tate = m[1] - m[3];
		yoko = m[0] - m[2];
		if (tate < 0) tate *= (-1);
		if (yoko < 0) yoko *= (-1);

		cout << yoko+1 << " " << tate+1 << endl;

	}

	return 0;
}