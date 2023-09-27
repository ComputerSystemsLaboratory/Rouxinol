#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct PQ {
private:
	long H;// 1-origin binary heap size
	vector<long> a;// 1-origin array for binary heap

public:
	PQ() : H(0), a(16,0) {} // a must have positive size.

	void insert(long x) {
		if (a.size() -1 < H) {
			a.resize(2*H);
		}
		++H;
		a[H] = x;
		heap_increase_key(H);
	}

	void heap_increase_key(long index) {
		long i_parent = index/2;
		if (i_parent < 1) return;
		if (a[index] > a[i_parent]) {
			swap(a[index], a[i_parent]);
			heap_increase_key(i_parent);
		}
	}

	void max_heapify(long i) {
		long lc, rc;
		lc = 2*i;
		rc = 2*i + 1;
		long largest = i;
		if (lc <= H && a[lc] > a[i]) {
			largest = lc;
		}
		if (rc <= H && a[rc] > a[largest]) {
			largest = rc;
		}
	
		if (largest != i) {
			swap(a[i], a[largest]);
			max_heapify(largest); 
		}
	}

	long extract_max() {
		if (H < 1) return -1;
		long res = a[1];
		a[1] = a[H];
		H--;
		max_heapify(1);
		return res;
	}
};

int main() {
	PQ pq;
	string s;
	while (cin >> s) {
		//cout << "input is " << s << endl;
		if (s == "end") break;
		if (s == "extract") {
			long max = pq.extract_max();
			cout << max << endl;
			continue;
		}
		long input_key; 
		if (s[0] == 'i') {
			cin >> input_key;
			pq.insert(input_key);
		}
	}
	return 0;
}


