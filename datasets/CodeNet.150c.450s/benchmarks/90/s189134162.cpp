#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

typedef pair<int, int> P;
typedef stack<int> S;

bool pairCompare(const P& firstElem, const P& secomdElem)
{
	return firstElem.second < secomdElem.second;
}

int main(void)
{
	vector<P> v;
	for (int i = 0; i < 100; i++) v.push_back(P(i, 0));
	int num;
	while (cin >> num && num) v[num].second++;
	stable_sort(v.begin(), v.end(), pairCompare);
	int i = v.size() - 1;
	S s;
	while (v[v.size() - 1].second == v[i].second) {s.push(v[i].first); i--;}
	while (s.size()) {cout << s.top() << endl; s.pop();}
	
	return 0;
}