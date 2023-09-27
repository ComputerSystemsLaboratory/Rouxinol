#include <iostream>
#include <vector>

using namespace std;

struct unionfind {
	vector<int> data;
	unionfind(int size) : data(size, -1) { }
	bool Union(int x, int y) {
		x = root(x);
		y = root(y);
		if (x != y) {
			if (data[y] < data[x])
				swap(x, y);
			data[x] += data[y];
			data[y] = x;
		}
		return x != y;
	}
	bool Find(int x, int y) {
		return root(x) == root(y);
	}
	int root(int x) {
		return data[x] < 0 ? x : data[x] = root(data[x]);
	}
	int size(int x) {
		return -data[root(x)];
	}
};



int main()
{
	int n,q,com,x,y;
	cin >> n >> q;
	unionfind a(n);
	for (int i = 0; i < q; i++) {
		cin >> com >> x >> y;
		if (com == 0) {
			a.Union(x,y);
		}
		else {
			cout << a.Find(x, y) << endl;;
		}
	}
	return 0;
}