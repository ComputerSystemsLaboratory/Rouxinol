#include <iostream>
#include <vector>
using namespace std;

enum Query {
	Unit,
	Same,
};

class DisjointSet {
public :
	DisjointSet(int size) {
		rank.resize(size, 0);
		parent.resize(size, 0);
		for (int i = 0; i < size; i++) {
			MakeSet(i);
		}
	}

	bool Same(int x, int y) {
		return FindSet(x) == FindSet(y);
	}

	void Unit(int x, int y) {
		Link(FindSet(x), FindSet(y));
	}

private:
	void Link(int x, int y) {
		if (rank[x] > rank[y])
			parent[y] = x;
		else {
			parent[x] = y;
			if (rank[x] == rank[y])
				rank[y]++;
		}
	}

	//???????????°????????????
	//?????????????????????????????????????????????FindSet??????????????????????????????
	//(???????????????return????????¨???????????????????????????????????§???????????°??????????????????
	//????????\???????????????????????§???????????°??????????????????)
	void MakeSet(int x) {
		parent[x] = x;
		rank[x] = 0;
	}

	//?????????????????????
	//????????§???????????????????????°????????????????´°???p320???
	int FindSet(int x) {
		if (x != parent[x])
			parent[x] = FindSet(parent[x]);
		return parent[x];
	}

	vector<int> rank;
	vector<int> parent;
};

int main() {

	int number;
	int queryNum;

	cin >> number >> queryNum;
	DisjointSet* disSet = new DisjointSet(number);

	for (int i = 0; i < queryNum; i++) {
		int com;
		int x, y;
		cin >> com >> x >> y;

		if (com == 0)
			disSet->Unit(x, y);
		else if (com == 1)
			if (disSet->Same(x, y)) cout << 1 << endl;
			else                              cout << 0 << endl;
	}

	return 0;

}