#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include <algorithm>
#include <array>
#include <stack>
#include <map>

using namespace std;

template<typename ISTREAM>
void readGraphListAsMatrix(const size_t n, ISTREAM& cin, vector< vector<int> >& graphMatrix) {
	graphMatrix = vector< vector<int> >(n, vector<int>(n, 0));
	for (size_t i = 0; i != n; ++i) {
		size_t u;
		size_t k;
		cin >> u;
		cin>> k;
		for (size_t j = 0; j != k; ++j) {
			size_t v;
			cin >> v;
			graphMatrix.at(u - 1).at(v - 1) = 1;
		}
	}
}

void printMatrix(const vector< vector<int> >& grapthMatrix) {
	const size_t n = grapthMatrix.size();
	for (size_t i = 0; i != n; ++i) {
		const vector<int>& adj = grapthMatrix.at(i);
		cout << adj.front();
		for (size_t j = 1; j != n; ++j) {
			cout << " " << adj.at(j);
		}
		cout << endl;
	}
}


template<typename T>
void execute(T& cin) {
	size_t n;
	cin >> n;
	vector< vector<int> > graphMatrix;
	readGraphListAsMatrix(n, cin, graphMatrix);
	stack<int> visitedNodeIDs;
	int time = 0;
	vector<pair<int, int>> timeStamp(n,make_pair(0,0));//pair<初回訪問時刻, 完了時刻>
	vector<vector<int>::iterator> searchBeginPos; {
		searchBeginPos.reserve(n);
		for (auto& v : graphMatrix)searchBeginPos.push_back(v.begin());
	}

	vector<pair<int, int>>::iterator visitTimeSearchPos = timeStamp.begin();
	while (
		(visitTimeSearchPos = find_if(visitTimeSearchPos, timeStamp.end(), [&](const pair<int, int>& df) {return df.first == 0; }))
		!= timeStamp.end()) {
		const size_t firstVisitNodeID_1 = distance(timeStamp.begin(), visitTimeSearchPos);
		visitedNodeIDs.push(firstVisitNodeID_1);
		visitTimeSearchPos->first = ++time;
		for (auto&v : graphMatrix) v.at(firstVisitNodeID_1) = 0;
		++visitTimeSearchPos;
		while (!visitedNodeIDs.empty()) {
			const int nodeID_1 = visitedNodeIDs.top();
			vector<int>& neighbourNodeList = graphMatrix.at(nodeID_1);
			vector<int>::iterator result = find(searchBeginPos.at(nodeID_1), neighbourNodeList.end(), 1);
			if (result != neighbourNodeList.end()) {
				const int nextVisitID_1 = distance(neighbourNodeList.begin(), result);
				timeStamp.at(nextVisitID_1).first = time + 1;
				for (auto&v : graphMatrix) v.at(nextVisitID_1) = 0;
				visitedNodeIDs.push(nextVisitID_1);
				searchBeginPos.at(nodeID_1) = result + 1;
			}
			else {
				//隣接リストに検索対象なし
				timeStamp.at(nodeID_1).second = time + 1;
				visitedNodeIDs.pop();
			}
			++time;
		}
	}
	for (int i = 0; i != n; ++i) {
		cout << i + 1 << " " << timeStamp.at(i).first << " " << timeStamp.at(i).second << endl;
	}
}


int main()
{
	execute(cin);

	return 0;
}
