#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

struct UF {
	vector <int> U;
	UF(int n) {
		U.reserve(n + 1);
		for (int i = 0; i < n; i++){
			U[i] = i;
		}
	}
	void makeset(int x){
		// コンストラクタでやったけど一応かいとく
		U[x] = x;
	}
	int find(int x){
		if (U[x] == x){
			return x;
		}
		else {
			int root = find(U[x]);
			U[x] = root;
			return root;
		}
	}
	bool same(int x, int y){
		return find(x) == find(y);
	}
	void uni(int x, int y){
		U[find(x)] = find(y);
	}
};

int main(void)
{
	int n, q;
	int com, x, y;

	cin >> n >> q;

	UF uf(n);
	while (q--){
		scanf("%d %d %d", &com, &x, &y);
		if (com == 0){
			// unite
			uf.uni(x, y);
		}
		else {
			printf("%d\n", (int)uf.same(x, y));
		}
	}

	return 0;
}