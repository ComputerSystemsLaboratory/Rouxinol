#include<iostream>
#include<vector>

using namespace std;

void elem_swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

inline bool isParent(int idx) { if (idx == 0) return false; else return true; }
inline bool isLeft_child(int size, int idx) { if ((idx + 1) * 2 > size) return false; else return true; }
inline bool isRight_child(int size, int idx) { if ((idx + 1) * 2 + 1 > size) return false; else return true; }

inline int get_nodekey(vector<int> & vec, int idx) { return vec.at(idx); }
inline int idx_parent(int node_num) { return node_num / 2 - 1; }
inline int get_parent(vector<int> & vec, int idx) { return vec.at(idx_parent(idx + 1)); }
inline int idx_left_child(int node_num) { return node_num * 2 - 1; }
inline int get_left_child(vector<int> & vec, int idx) { return vec.at(idx_left_child(idx + 1)); }
inline int idx_right_child(int node_num) { return node_num * 2; }
inline int get_right_child(vector<int> & vec, int idx) { return vec.at(idx_right_child(idx + 1)); }
//ヒープを操作する関数に入れる前にindexを変換する
inline int idxToheap(int index) { return index + 1; }
//実際の配列を操作するときにindexに変換
inline int heapToidx(int hnum) { return hnum - 1; }


void maxHeapify(vector<int> & vec, int idx) {
	if (isRight_child(vec.size(), idx)) {
		int left = vec.at(idx_left_child(idx + 1));
		int right = vec.at(idx_right_child(idx + 1));
		if (left <= vec.at(idx) && right <= vec.at(idx)) return;
		else if (left > vec.at(idx) && left > right) {
			elem_swap(vec.at(idx), vec.at(idx_left_child(idx + 1)));
			maxHeapify(vec, idx_left_child(idx + 1));
		}
		else {
			elem_swap(vec.at(idx), vec.at(idx_right_child(idx + 1)));
			maxHeapify(vec, idx_right_child(idx + 1));
		}
	}
	else if (isLeft_child(vec.size(), idx)) {
		if (vec.at(idx) < vec.at(idx_left_child(idx + 1))) elem_swap(vec.at(idx), vec.at(idx_left_child(idx + 1)));
	}
	else return;

}

void buildMaxHeap(vector<int> & vec) {
	for (int i = vec.size() / 2; i >= 0; i--) maxHeapify(vec, i);
}


int main(void) {

	int size;
	cin >> size;
	vector<int> vec(size);
	for (int i = 0; i < size; i++) cin >> vec.at(i);
	buildMaxHeap(vec);
	for (int i = 0; i < size; i++) cout << " " << vec.at(i);
	cout << endl;
	return 0;
}

