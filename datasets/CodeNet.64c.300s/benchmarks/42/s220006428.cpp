
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

	while (1) {
		int N;
		cin >> N;
		int cnt = N;
		if (N==0) break;
		int x[20], y[20];
		bool flag[20] = { false };
		for (int i = 0; i < N; i++) {
			cin >> x[i] >> y[i];
			flag[i] = true;
		}
		int M, posx=10, posy=10;
		cin >> M;
		for (int i = 0; i < M; i++) {
			char d;
			int dis;
			cin >> d >> dis;
			for (int j = 0; j < dis; j++) {
				if (d == 'N') posy++;
				if (d == 'E') posx++;
				if (d == 'S') posy--;
				if (d == 'W') posx--;
			//	cout << "x : " << posx << " y : " << posy << endl;
				for (int k = 0; k < N; k++) {
					if (x[k] == posx && y[k] == posy && flag[k]) {
						cnt--;
						flag[k] = false;
					}
				}
			}
		
		}
		if (cnt == 0) cout << "Yes" << endl;
		else cout << "No" << endl;
	}

	return 0;
}