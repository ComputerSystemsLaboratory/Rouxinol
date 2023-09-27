#include <iostream>
#include <vector>
#include <cmath>
#include <limits>
#include <functional>
#include <algorithm>

using namespace std;

template<typename T, int VALUE_N>
class SegmentTree {
	const T INIT_VALUE;
	const function<T(T, T)> mergeFunc;
	const function<T(T, T)> updateFunc;
	const int LEAF_N = 1 << (int)(ceil(log2(VALUE_N)));
	const int NODES_N = LEAF_N * 2 - 1;
	vector<T> nodes;
	inline int leafIndex(int i) { return LEAF_N - 1 + i; }
	inline int parentIndex(int i) { return (i - 1) / 2; }
	inline int childLIndex(int i) { return 2 * i + 1; }
	inline int childRIndex(int i) { return 2 * i + 2; }
	// [a,b) query. current k node == [l,r)
	T query(int a, int b, int k, int l, int r) {
		if (r <= a || b <= l) return INIT_VALUE;
		if (a <= l && r <= b) return nodes[k];
		int mid = (l + r) / 2;
		return mergeFunc(query(a, b, childLIndex(k), l, mid), query(a, b, childRIndex(k), mid, r));
	}
public:
	SegmentTree(T iniValue, function<T(T, T)> mergeF, function<T(T,T)> updateF) : 
		nodes(NODES_N), 
		INIT_VALUE(iniValue), 
		mergeFunc(mergeF),
		updateFunc(updateF){
		for (int i = leafIndex(0); i < leafIndex(LEAF_N); i++) {
			nodes[i] = INIT_VALUE;
		}
		for (int i = parentIndex(leafIndex(LEAF_N - 1)); i >= 0; i--) {
			nodes[i] = mergeFunc(nodes[childLIndex(i)], nodes[childRIndex(i)]);
		}
	}
	void update(int valueI, T newValue) {
		int nodeI = leafIndex(valueI);
		T oldValue = nodes[nodeI];
		nodes[nodeI] = updateFunc(oldValue, newValue);
		while (nodeI > 0) {
			nodeI = parentIndex(nodeI);
			nodes[nodeI] = mergeFunc(nodes[childLIndex(nodeI)], nodes[childRIndex(nodeI)]);
		}
	}
	// [a,b) query
	T query(int a, int b) {
		return query(a, b, 0, 0, LEAF_N);
	}
};

int main() {
	using IntType = long long;
	constexpr int MAX_ELEM_NUM = 100001;
	auto addfunc = [](IntType a, IntType b) {return a + b; };
	SegmentTree<IntType, MAX_ELEM_NUM> s(0, addfunc, addfunc);
	int elemNum, queryNum;
	int com;
	IntType x, y;
	cin >> elemNum >> queryNum;
	for (int qI = 0; qI < queryNum; qI++) {
		cin >> com >> x >> y;
		switch (com) {
		case 0:
			s.update(x, y);
			break;
		case 1:
			IntType ret = s.query(x, y + 1);
			cout << ret << endl;
			break;
		}
	}

	return 0;
}