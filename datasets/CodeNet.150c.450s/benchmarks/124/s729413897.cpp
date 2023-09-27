#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <string>
#include <iostream>
#include <climits>
#include <list>
#include <queue>

using namespace std;

static const int INFTY = -1;

int H;
int A[101];
int NodeNum[101];
int IndexInA[100];


int parent(int i) {
	return i / 2;
}

int left(int i) {
	return 2 * i;
}

int right(int i) {
	return 2 * i + 1;
}

void minHeapify(int i) {
	int l = left(i);
	int r = right(i);
	int smallest = i;
	if (l <= H && A[l] < A[i]) {
		smallest = l;
	}
	if (r <= H && A[r] < A[smallest]) {
		smallest = r;
	}
	if (smallest != i) {
		int temp = A[i];
		A[i] = A[smallest];
		A[smallest] = temp;
		temp = NodeNum[i];
		NodeNum[i] = NodeNum[smallest];
		NodeNum[smallest] = temp;
		IndexInA[NodeNum[i]] = i;
		IndexInA[NodeNum[smallest]] = smallest;

		minHeapify(smallest);
	}
}

void insert(int d, int nodeNum) {
	int i = ++H;
	A[i] = d;
	NodeNum[i] = nodeNum;
	IndexInA[nodeNum] = i;
	int p = parent(i);
	while (i > 1 && A[p] > A[i]) {
		int temp = A[p];
		A[p] = A[i];
		A[i] = temp;
		temp = NodeNum[p];
		NodeNum[p] = NodeNum[i];
		NodeNum[i] = temp;
		IndexInA[NodeNum[p]] = p;
		IndexInA[NodeNum[i]] = i;
		i = p;
		p = parent(i);
	}
}

int heapExtractMinNodeNum() {
	int minNodeNum = NodeNum[1];
	A[1] = A[H];
	NodeNum[1] = NodeNum[H];
	IndexInA[NodeNum[1]] = 1;
	H--;
	minHeapify(1);

	return minNodeNum;
}

void decrese(int i, int value) {
	A[i] = value;
	int p = parent(i);
	while (i > 1 && A[p] > A[i]) {
		int temp = A[p];
		A[p] = A[i];
		A[i] = temp;
		temp = NodeNum[p];
		NodeNum[p] = NodeNum[i];
		NodeNum[i] = temp;
		IndexInA[NodeNum[p]] = p;
		IndexInA[NodeNum[i]] = i;
		i = p;
		p = parent(i);
	}
}

int main() {
	int Dist[100];
	int AdjacenceyList[100][100];
	int AdjacenceyWeightList[100][100];
	int Degree[100];
	int i, j;
	int N;
	int W;
	//int Deg;
	int MinTotalWeight = 0;
	int u, v;
	int k;
	bool inT[100];

	cin >> N;

	//for (i = 0; i < N; i++) {
	//	inT[i] = false;
	//	Dist[i] = INFTY;
	//	Deg = -1;
	//	for (j = 0; j < N; j++) {
	//		cin >> W;
	//		if (W != -1) {
	//			AdjacenceyList[i][++Deg] = j;
	//			AdjacenceyWeightList[i][Deg] = W;
	//		}
	//	}
	//	Degree[i] = Deg + 1;
	//}

	for (i = 0; i < N; i++) {
		inT[i] = false;
		Dist[i] = INFTY;
		cin >> u >> k;
		Degree[u] = k;
		for (j = 0; j < k; j++) {
			cin >> AdjacenceyList[u][j] >> AdjacenceyWeightList[u][j];
		}
	}


	H = 0;
	u = 0;
	inT[u] = true;
	Dist[u] = 0;
	for (i = 1; i <= N - 1; i++) {
		for (j = 0; j < Degree[u]; j++) {
			v = AdjacenceyList[u][j];
			if (inT[v] == false) {
				W = AdjacenceyWeightList[u][j];
				if (Dist[v] == INFTY) {
					//Dist[v] = W;
					//insert(W, v);
					Dist[v] = Dist[u] + W;
					insert(Dist[v], v);
				}
				//else if (W < Dist[v]) {
				else if(W + Dist[u] < Dist[v]){
					//Dist[v] = W;
					//decrese(IndexInA[v], W);
					Dist[v] = W + Dist[u];
					decrese(IndexInA[v], Dist[v]);
				}
			}
		}

		int minNodeNum = heapExtractMinNodeNum();
		inT[minNodeNum] = true;
		//MinTotalWeight += Dist[minNodeNum];
		u = minNodeNum;

	}

	//printf("%d\n", MinTotalWeight);

	for (i = 0; i < N; i++) {
		printf("%d %d\n", i, Dist[i]);
	}

	return 0;
}