#include<iostream>
using namespace std;

struct Node {
	int key;
	int parent = -1;
	int left = -1;
	int right = -1;
};

Node T[251];

void prop(int num) {
	int div = num / 2;
	int tmp = num % 2;
	T[num].parent = div;
	if (tmp == 0) {
		T[div].left = num;
	}
	else {
		T[div].right = num;
	}
	
}

int main() {
	int n;
	cin >> n;
	cin >> T[1].key;
	for (int i = 2; i <= n; i++) {
		cin >> T[i].key;
		prop(i);
	}
	for (int i = 1; i <= n; i++) {
		cout << "node " << i << ": key = " << T[i].key << ", ";
		if (T[i].parent != -1) {
			cout << "parent key = " << T[T[i].parent].key << ", ";
		}
		if (T[i].left != -1) {
			cout << "left key = " << T[T[i].left].key << ", ";
		}
		if (T[i].right != -1) {
			cout << "right key = " << T[T[i].right].key << ", ";
		}
		cout << endl;
	}
}

