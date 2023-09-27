#include <iostream>
using namespace std;

int main() {
	int verNum;
	int vertexs[100][100];

	for (int i = 0; i < 100; i++)
		for (int j = 0; j < 100; j++)
			vertexs[i][j] = 0;
	cin >> verNum;
	for (int i = 0; i < verNum; i++) {
		int num; cin >> num; num--;
		int outNum;	cin >> outNum;
		for (int j = 0; j < outNum; j++) {
			int outVertex; cin >> outVertex;
			vertexs[i][--outVertex] = 1;
		}
	}

	for (int i = 0; i < verNum; i++) {
		for (int j = 0; j < verNum; j++) {
			if (j) cout << " ";
			cout << vertexs[i][j];
		}
		cout << endl;
	}
	return 0;
}