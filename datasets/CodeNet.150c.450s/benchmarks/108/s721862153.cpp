#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

template<typename ISTREAM>
void readGraphList(ISTREAM& cin, vector< vector<int> >& graphList) {
	size_t n;
	cin >> n;
	graphList = vector< vector<int> >(n);
	for (size_t i = 0; i != n; ++i) {
		size_t u;
		size_t k;
		cin >> u;
		cin >> k;
		vector<int>& v = graphList.at(u - 1);
		v.resize(k);
		for (size_t j = 0; j != k; ++j) {
			cin >> v.at(j);
			v.at(j)--;
		}
	}
}
#if 1
void widthSearch(const vector<vector<int>>& graphList) {
	const size_t n = graphList.size();
	queue<int> nodeQueue;
	vector<int> distanceList(n, -1);
	nodeQueue.push(0);
	while (!nodeQueue.empty()) {
		const int id = nodeQueue.front();
		int& currentNodeDistance = distanceList.at(id);
		++currentNodeDistance;
		const vector<int>& adjList = graphList.at(id);
		for (const auto& adjID : adjList) {
			int& adjDistance = distanceList.at(adjID);
			if (adjDistance != -1)continue;
			nodeQueue.push(adjID);
			adjDistance = currentNodeDistance;
		}
		nodeQueue.pop();
	}
	for (int i = 0; i != n; ++i) {
		cout << i + 1 << " " << distanceList.at(i) << endl;
	}
}
#endif

template<typename T>
void execute(T& cin) {
	vector< vector<int> > graphList;
	readGraphList(cin, graphList);
	widthSearch(graphList);
}

int main()
{
	execute(cin);

	return 0;
}
