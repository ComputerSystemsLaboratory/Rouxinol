#include <vector>
#include <iostream>
#include <functional>
using namespace std;
int main() {
	int N;
	cin >> N;
	vector<int> lc(N), rc(N);
	for(int i = 0; i < N; ++i) {
		int id;
		cin >> id;
		cin >> lc[id] >> rc[id];
	}
	int root = 0;
	for(int i = 0; i < N; ++i) {
		root ^= i;
		if(lc[i] != -1) root ^= lc[i];
		if(rc[i] != -1) root ^= rc[i];
	}
	function<void(int, int)> recur = [&](int pos, int method) {
		if(method == 0) cout << ' ' << pos;
		if(lc[pos] != -1) recur(lc[pos], method);
		if(method == 1) cout << ' ' << pos;
		if(rc[pos] != -1) recur(rc[pos], method);
		if(method == 2) cout << ' ' << pos;
	};
	cout << "Preorder" << endl; recur(root, 0); cout << endl;
	cout << "Inorder" << endl; recur(root, 1); cout << endl;
	cout << "Postorder" << endl; recur(root, 2); cout << endl;
	return 0;
}
