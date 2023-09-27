#include <iostream>
using namespace std;

enum Color {
	WHITE,
	GRAY,
	BLACK,
};

class dfs {
public:
	dfs(bool matrixT[][100], Color colorT[], int ts_F[], int ts_L[], int verNum) {
		for (int i = 0; i < verNum; i++) {
			for (int j = 0; j < verNum; j++)
				matrixTable[i][j] = matrixT[i][j];
		}
		verNumber = verNum;
	}

	void DFS(int nowVerVal) {
		colorTable[nowVerVal] = GRAY;
		++ttl;
		ts_first[nowVerVal] = ttl;

		for (int nextVer = 0; nextVer < verNumber; nextVer++) {
			if (matrixTable[nowVerVal][nextVer] == false) continue;
			if (colorTable[nextVer] != WHITE) continue;
			DFS(nextVer);
		}
		colorTable[nowVerVal] = BLACK;
		++ttl;
		ts_last[nowVerVal] = ttl;
	}

	void DFS_Init() {
		ttl = 0;
		for (int i = 0; i < verNumber; i++)
			colorTable[i] = WHITE;

		for (int i = 0; i < verNumber; i++)
			if (colorTable[i] == WHITE) DFS(i);
	}

	void print() {
		for (int i = 0; i < verNumber; i++) {
			cout << i + 1 << " " << ts_first[i] << " " << ts_last[i] << endl;
		}
	}
private:
	bool matrixTable[100][100];
	Color colorTable[100];
	int ts_first[100];
	int ts_last[100];
	int verNumber;
	int ttl;
};

int main() {
	int verNum; //num??????????????°???value????????????????????????????????¨???
	bool matrixTable[100][100]; //???????????¨??????????????????
	Color colorTable[100];
	int timeStamp_first[100];
	int timeStamp_last[100];
	cin >> verNum;

	for (int i = 0; i < verNum; i++)
		for (int j = 0; j < verNum; j++) {
			matrixTable[i][j] = false;
		}

	for (int i = 0; i < verNum; i++) {
		int verVal, nextVerNum;
		cin >> verVal >> nextVerNum;
		for (int j = 0; j < nextVerNum; j++) {
			int nextVerVal;
			cin >> nextVerVal;
			//0?????????????????´???
			matrixTable[verVal - 1][nextVerVal - 1] = true;
		}
	}

	dfs* d = new dfs(matrixTable, colorTable, timeStamp_first, timeStamp_last, verNum);
	d->DFS_Init();
	d->print();

	return 0;
}