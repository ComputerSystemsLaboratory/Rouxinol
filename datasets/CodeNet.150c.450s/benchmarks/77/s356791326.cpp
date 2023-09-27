#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
	int n, m;
	while (cin >> n, n){
		bool ex[21][21];
		for (int i = 0; i < 21; i++) for (int j = 0; j < 21; j++) ex[i][j] = false;
		for (int i = 0; i < n; i++){
			int x,y;
			cin >> x >> y;
			ex[x][y] = true;
		}
		cin >> m;
		map<string, pair<int, int> > dd;
		dd["N"] = make_pair(0, 1);
		dd["E"] = make_pair(1, 0);
		dd["W"] = make_pair(-1, 0);
		dd["S"] = make_pair(0, -1);

		int x = 10, y = 10;

		for (int i = 0; i < m; i++){
			string dir;
			int dis;
			cin >> dir >> dis;
			for (int i = 0; i < dis; i++){
				x += dd[dir].first;
				y += dd[dir].second;
				if (ex[x][y]) ex[x][y] = false;
			}
		}
		int count = 0;
		for (int i = 0; i < 21; i++){
			for (int j = 0; j < 21; j++){
				if (ex[i][j]) count++;
			}
		}
		if (count != 0) cout << "No" << endl;
		else cout << "Yes" << endl;
	}
	return 0;
}