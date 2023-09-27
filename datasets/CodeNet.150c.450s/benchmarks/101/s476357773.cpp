#include <bits/stdc++.h>

using namespace std;

int main() {

	int n, m;
	cin >> n >> m;
	vector < vector<int>> G(n + 1);

	//グラフ隣接リスト読み込み
	int a, c;
	for (int i = 1; i <= m; i++) {
		cin >> a >> c;
		G[a].push_back(c);
		G[c].push_back(a);
	}

	//幅優先探索処理
	vector<bool> seen(n + 1, false);	//発見したらtrue
	deque<int> todo;					//行く所のスタック

	int s = 1;							//今いる場所

	bool brkflg;
	vector<long> color(n + 1);
	int colornum = 0;
	for (int j = 0; j < n; j++) {		//全ての頂点を調べる

		if (color[j] == 0) {
			colornum++;
			color[j] = colornum;
			brkflg = false;
			todo.clear();

			//for (int k = 0; k <= n; k++) {
			//	seen[k] = false;//一旦全クリア
			//}

			if (seen[j] == false) {			//訪れてなかったら処理すすめる
				seen[j] = true;
				todo.push_back(j);

				while (todo.empty() != true) {				//キューが空になるまで処理	
					s = todo.front();						//処理番号を指定
					int tugiflg = false;					//次があったらtrueにするフラグ
					for (int i = 0; i < G[s].size(); i++) {

						if (seen[G[s][i]] != true) {
							seen[G[s][i]] = true;
							color[G[s][i]] = colornum;
							todo.push_back(G[s][i]);
							tugiflg = true;
						}
					}
					todo.pop_front(); //次を全部探したので削除する
				}
			}
		}
	}

	int in1, in2;
	cin >> m;
	for (int i = 0; i <m; i++) {
		cin >> in1 >> in2;
		if (color[in1] == color[in2]) {
			cout << "yes" << endl;
		}
		else {
			cout << "no" << endl;
		}
	}

	return 0;

}
