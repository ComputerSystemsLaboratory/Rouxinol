#include<iostream>
using namespace std;
#define MAX 2000000001
struct Node {
	int key = MAX;
	int parent = MAX;
	int left = MAX;
	int right = MAX;
};

Node T[500001];

void search_i(int search) {
	if (T[search].left != MAX) {
		search_i(T[search].left);
	}
	cout << " " << T[search].key;
	if (T[search].right != MAX) {
		search_i(T[search].right);
	}
}

void search_l(int search) {
	cout << " " << T[search].key;
	if (T[search].left != MAX) {
		search_l(T[search].left);
	}
	if (T[search].right != MAX) {
		search_l(T[search].right);
	}
}


void print() {
	search_i(0);
	cout << endl;
	search_l(0);
	cout << endl;
}

void insert(int k) {
	int p = 0;
	while (1) {
		if (T[k].key < T[p].key) {
			if (T[p].left == MAX) {
				T[p].left = k;
				T[k].parent = p;
				return;
			}
			else {
				p = T[p].left;
			}
		}
		else {
			if (T[p].right == MAX) {
				T[p].right = k;
				T[k].parent = p;
				return;
			}
			else {
				p = T[p].right;
			}
		}
	}
}

int main() {
	int n, tmp;
	string com;
	cin >> n;
	cin >> com;
	cin >> tmp;
	T[0].key = tmp;
	for (int i = 1; i < n; i++) {
		cin >> com;
		if (com == "insert") {
			cin >> tmp;
			T[i].key = tmp;
			insert(i);
		} 
		else {
			print();
		}
	}
}
