#include <iostream>
#include <vector>
#include <map>
#include <stack>
using namespace std;

#define null -1

void DFS(vector<int> rVal[], int uColor_m[], int idOrSs) {
	stack<int> stack;
	stack.push(idOrSs);
	uColor_m[idOrSs] = idOrSs;

	while (!stack.empty()) {
		int curUVal = stack.top();
		stack.pop();
		for (int i = 0; i < (signed)rVal[curUVal].size(); i++) {
			int curV = rVal[curUVal][i];
			if (uColor_m[curV] != null) continue;
			uColor_m[curV] = idOrSs;
			stack.push(curV);
		}
	}
}

void assignColor(int uNum, vector<int> rVal[], int uColor_m[]) {
	for (int i = 0; i < uNum; i++)
		uColor_m[i] = null;
	for (int i = 0; i < uNum; i++) {
		if (uColor_m[i] == null) DFS(rVal, uColor_m, i);
	}
}

int main() {
	int userNum;
	int relationNum;
	int uColor_map[100000]; //<?????????, ??°??????????????????>
	//??????????????¨????????????
	vector<int> relationVal[100000];
	//int userColor[100000];

	cin >> userNum >> relationNum;
	for (int i = 0; i < relationNum; i++) {
		int userVal1, userVal2;
		cin >> userVal1 >> userVal2;
		relationVal[userVal1].push_back(userVal2);
		relationVal[userVal2].push_back(userVal1);
		uColor_map[i] = null;
	}

	assignColor(userNum, relationVal, uColor_map);

	int qNum;
	cin >> qNum;
	for (int i = 0; i < qNum; i++) {
		int uV1, uV2;
		cin >> uV1 >> uV2;
		if (uColor_map[uV1] == uColor_map[uV2])
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	return 0;
}