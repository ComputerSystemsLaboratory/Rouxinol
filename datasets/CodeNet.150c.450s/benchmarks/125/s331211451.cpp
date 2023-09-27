#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include <algorithm>
#include <array>
#include <stack>
#include <tuple>

using namespace std;

template<typename ISTREAM>
void readGraphListAsMatrix(const size_t n, ISTREAM& cin, vector< vector<int> >& graphMatrix) {
	graphMatrix = vector< vector<int> >(n, vector<int>(n, 0));
	for (size_t i = 0; i != n; ++i) {
		size_t u;
		size_t k;
		cin >> u;
		cin >> k;
		for (size_t j = 0; j != k; ++j) {
			size_t v;
			cin >> v;
			graphMatrix.at(u - 1).at(v - 1) = 1;
		}
	}
}

void printMatrix(const vector< vector<int> >& graphMatrix) {
	const size_t n = graphMatrix.size();
	for (size_t i = 0; i != n; ++i) {
		const vector<int>& adj = graphMatrix.at(i);
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
	stack<size_t> visitedNodeIDs;
	vector<vector<int>::iterator> searchBeginPos;
	searchBeginPos.reserve(n);
	for (auto& v : graphMatrix)searchBeginPos.push_back(v.begin());
	int time = 0;
	vector<pair<int, int>> timeStamp(n,make_pair(0,0));//pair<初回訪問時刻, 完了時刻>
	for (int i = 0; i != n; ++i) {
		pair<int, int>& dp = timeStamp.at(i);
		if (dp.first != 0)continue;
		visitedNodeIDs.push(i);
		dp.first = ++time;
		while (!visitedNodeIDs.empty()) {
			const int nodeID_1 = visitedNodeIDs.top();
			vector<int>& neighbourNodeList = graphMatrix.at(nodeID_1);
			vector<int>::iterator& searchStart = searchBeginPos.at(nodeID_1);
			while (true) {
				searchStart = find(searchStart, neighbourNodeList.end(),1);
				if (searchStart == neighbourNodeList.end()) {
					timeStamp.at(nodeID_1).second = time + 1;
					visitedNodeIDs.pop();
					break;
				}
				else {
					const size_t nextVisitID_1 = distance(neighbourNodeList.begin(), searchStart);
					++searchStart;
					if (timeStamp.at(nextVisitID_1).first == 0) {
						timeStamp.at(nextVisitID_1).first = time + 1;
						visitedNodeIDs.push(nextVisitID_1);
						break;
					}
				}
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
