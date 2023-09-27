#include<iostream>
using namespace std;
#define INFTY (1 << 30)

enum Color {
	WHITE,
	GRAY,
	BLACK,
};

void Prim(int verValWeight[][100], int verNum) {
	int distance[100];
	Color color[100];
	int parent[100];
	for (int i = 0; i < verNum; i++) {
		color[i] = WHITE;
		distance[i] = INFTY;
		parent[i] = -1;
	}
	distance[0] = 0;

	while (true) {
		int min_cost = INFTY;
		int subScript;
		for (int i = 0; i < verNum; i++) {
			if (color[i] != BLACK && distance[i] < min_cost) {
				min_cost = distance[i];
				subScript = i;
			}
		}

		if (min_cost == INFTY)
			break; //end

		color[subScript] = BLACK;

		for (int i = 0; i < verNum; i++) {
			if (color[i] != BLACK && verValWeight[subScript][i] != INFTY) {
				if (verValWeight[subScript][i] < distance[i]) {
					distance[i] = verValWeight[subScript][i];
					parent[i] = subScript;
					color[i] = GRAY;
				}
			}
		}
	}

	int weight_sum = 0;
	for (int i = 0; i < verNum; i++)
		if (parent[i] != -1)
			weight_sum += verValWeight[i][parent[i]];
	cout << weight_sum << endl;

}

int main() {
	int verNum;
	int verValWeight[100][100];
	int parent[100];

	cin >> verNum;
	for (int i = 0; i < verNum; i++)
		for (int j = 0; j < verNum; j++) {
			cin >> verValWeight[i][j];
			if (verValWeight[i][j] == -1) verValWeight[i][j] = INFTY;
		}

	Prim(verValWeight, verNum);

	return 0;
}