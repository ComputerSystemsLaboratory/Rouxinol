#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;
const int INF = 10000;

template<typename ISTREAM>
void readWeightedGraphMatrix(ISTREAM& cin, vector< vector<int> >& weightedGraphMatrix) {
	size_t n;
	cin >> n;
	int weight;
	weightedGraphMatrix = vector< vector<int> >(n, vector<int>(n));
	for (size_t i = 0; i != n; ++i) {
		for (size_t j = 0; j != n; ++j) {
			cin >> weight;
			weightedGraphMatrix.at(i).at(j) = weight != -1 ? weight : INF;
		}
	}
}

int MST(const vector< vector<int> >& weightedGraphMatrix) {
	enum Color {
		WHITE, GRAY, BLACK//白は未訪問でTと隣接していない、。グレーはTと隣接状態だが未訪問、黒は訪問済み。木は閉路を持たないグラフなので、全域木の計算では
		//各点は1度だけ訪問されるはず。
	};
	const size_t n = weightedGraphMatrix.size();
	vector<Color> color(n,Color::WHITE);
	vector<int> d(n, INF);
	vector<int> p(n, INF);
	color.front() = Color::GRAY;
	d.front() = 0;
	int currentNode = 0;
	while (true) {
		int min = INF;
		int u;
		//TからV-Tへ接続する辺の重みの中で最小のものを求める。
		//同時に、その辺に接続する辺のT内のノードを求める。
		for (size_t i = 0; i != n; ++i) {
			if (color.at(i) == Color::BLACK || color.at(i) == Color::WHITE) continue;//訪問済みはスキップ
			if (d.at(i) >= min)continue;
			min = d.at(i);//TからV-Tの中のノードiへ向かう辺の重みの最小値を更新
			u = i;
		}

		
		if (min == INF) {
			//ノード０からアクセス可能なすべての点を訪問済みになったらMST構築完了
			break;
		}

		color.at(u) = Color::BLACK;//訪問

		for (int v = 0; v != n; ++v) {
			if (color.at(v) == Color::BLACK) continue;//訪問済みはスキップ
			if (weightedGraphMatrix.at(u).at(v) == INF ) continue;
			if (weightedGraphMatrix.at(u).at(v) >= d.at(v)) continue;
			d.at(v) = weightedGraphMatrix.at(u).at(v);
			p.at(v) = u;
			color.at(v) = Color::GRAY;

		}
	
	}
	int sum = 0;
	for (int i = 0; i != n; ++i) {
		if (p.at(i) == INF)continue;
		sum += weightedGraphMatrix.at(i).at(p.at(i));
	}
	return sum;
}

template<typename T>
void execute(T& cin) {
	vector< vector<int> > graphList;
	readWeightedGraphMatrix(cin, graphList);
	cout << MST(graphList) << endl;
}


int main()
{


	execute(cin);



	return 0;
}
