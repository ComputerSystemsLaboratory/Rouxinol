#include<iostream>
#include<algorithm>
#include<vector>
#define MAX 101
#define INF 1000001
using namespace std;

int n, isSelected[MAX], dist[MAX];
vector<pair<int, int>> ver[MAX];

void initDijkstra(void);
void dijkstra(void);
bool doesFinished(void);

int main() {
	int i, j, id, k, v, c;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> id >> k;
		for (j = 0; j < k; j++) {
			cin >> v >> c;
			ver[id].push_back(make_pair(v, c));
		}
	}

	initDijkstra();

	while (!doesFinished())dijkstra();

	for (i = 0; i < n; i++) {
		cout << i << " " << dist[i] << endl;
	}

	return 0;
}

void initDijkstra(void) {

	dist[0] = 0;
	isSelected[0] = 1;
	for (int i = 1; i < n; i++)dist[i] = INF;

	vector<pair<int, int>>::iterator itv;

	for (itv = ver[0].begin(); itv != ver[0].end(); itv++) {
		dist[itv->first] = itv->second;
	}

}

void dijkstra(void) {
	int i, minu = -1, mindist = INF;
	vector<pair<int, int>>::iterator itv;

	for (i = 0; i < n; i++) {
		if (isSelected[i] == 0)continue;
		for (itv = ver[i].begin(); itv != ver[i].end(); itv++){
			if (isSelected[itv->first] == 1)continue;
			if (dist[itv->first] < mindist) {
				mindist = dist[itv->first];
				minu = itv->first;
			}
		}
	}
	isSelected[minu] = 1;
	//dist[minu] = dist[minp] + mindist;
	for (itv = ver[minu].begin(); itv != ver[minu].end(); itv++) {
		if (isSelected[itv->first] == 1)continue;
		dist[itv->first] = min(dist[minu] + itv->second, dist[itv->first]);
	}
}

bool doesFinished(void) {
	for (int i = 0; i < n; i++) {
		if (isSelected[i] == 0)return false;
	}
	return true;
}