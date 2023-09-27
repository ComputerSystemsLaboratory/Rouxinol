#include <iostream>
#include <queue>
using namespace std;

#define INFTY (1 << 30)

void BFS(bool mT[][100], int firstVerVal, int verNum, int distance[]) {
	queue<int>  verQ;
	verQ.push(firstVerVal);
	for (int i = 0; i < verNum; i++)
		distance[i] = INFTY;
	distance[firstVerVal] = 0;

	while (!verQ.empty()) {
		int curVerVal = verQ.front();
		verQ.pop();
		for (int i = 0; i < verNum; i++) {
			if (!mT[curVerVal][i] || distance[i] != INFTY) continue;
			distance[i] = distance[curVerVal] + 1;
			verQ.push(i);
		}
	}
}

int main() {
	bool matrixTable[100][100];
	int distance[100];
	int verNum;
	cin >> verNum;

	for (int i = 0; i < verNum; i++)
		for (int j = 0; j < verNum; j++)
			matrixTable[i][j] = false;
		
	for (int i = 0; i < verNum; i++) {
		int anyVerVal, anyVerNum;
		cin >> anyVerVal >> anyVerNum;
		for (int j = 0; j < anyVerNum; j++) {
			int verValue; cin >> verValue;
			matrixTable[anyVerVal - 1][verValue - 1] = true;
		}
	}

	BFS(matrixTable, 0, verNum, distance);

	for (int i = 0; i < verNum; i++) {
		cout << i + 1 << " ";
		if (distance[i] == INFTY)
			cout << -1 << endl;
		else
			cout << distance[i] << endl;
	}

	return 0;
}