#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

const int s = 251;

int parent(int i) { return i / 2; }
int left(int i) { return 2 * i; }
int right(int i) { return 2 * i + 1; }

// MAIN FUNCTION
int main(int argc, char** argv)
{
	int heap[s];
	// Input
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> heap[i];
	}

	// Output
	for (int i = 1; i <= n; i++) {
		cout << "node " << i << ":";
		cout << " key = " << heap[i] << ", ";
		if (parent(i) >= 1) cout << "parent key = " << heap[parent(i)] << ", ";
		if (left(i) <= n) cout << "left key = " << heap[left(i)] << ", ";
		if (right(i) <= n) cout << "right key = " << heap[right(i)] << ", ";
		cout << endl;
	}
	return 0;
}